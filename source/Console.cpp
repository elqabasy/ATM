//
// Created by Mahros on 12/25/2023.
//
#include <iostream>
#include <thread>
#include <windows.h>
#include "..\include\Console.h"
#include "..\include\Help.h"
#include "..\include\Constants.h"

// initial Values

// Constructor
Console::Console(string appName) : _name(std::move(appName)) {

}

// Setters
void Console::setBranch(const std::string &branch) {
    _branch = branch;
}

// Getters
int Console::getScreenWidth() {
    // get screen width
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int width;

    if(GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    } else {
        width = 80;
    }

    return width;
}
string Console::getOSName() {
    // Retrieves the name of the current operating system.
    #if defined(_WIN32) || defined(_WIN64)
        return "Windows";
    #elif defined(__APPLE__) || defined(__MACH__)
        return "macOS";
        #elif defined(__linux__) || defined(__linux)
            return "Linux";
        #else
            return "Unknown OS";
    #endif
}
string Console::getBranch() {
    return _branch;
}
// Events
void Console::onStart() {
    system("cls");
    cout << _name << " Version " << _version << CONSOLE_NEW_LINE;
}
void Console::onExit() {
    system("pause");
}

// Functionality
void Console::run() {
    onStart();
    while (_running) {
        try {
            string command;
            cout << _name << _branch << "> ";
            getline(cin, command);

            if (command == "exit") {
                stop();
            } else {
                onStart();
                executeCommand(command);
            }
        }
        catch (const exception& e) {
            cerr << "Error: " << e.what() << CONSOLE_NEW_LINE;
        }
    }
    onExit();
}
void Console::stop() {
    _running = false;
}
void Console::executeCommand(const string &command) {
    if(command == "help"){
        help();
    } else{
        cout << "Command not found - Use command help for more information." << CONSOLE_NEW_LINE;
    }
}

// Commands
void Console::help() {
    Help HELP("help", "Show help for this application.", "");
    HELP.displayHelp();
}

// Destructor
Console::~Console() = default;

