//
// Created by Mahros on 12/25/2023.
//
#include <iostream>
#include <thread>
#include <windows.h>
#include "..\include\Console.h"

// initial Values
map<string, vector<string>> Console::_commands = {
    {"EXIT", {"q", "close", "exit", "quit", "stop", "end"}},
    {"HELP", {"h", "help", "?"}},
    {"CLEAR", {"c", "clear", "cls", "clean", "clear screen", "clean screen"}},
};

// Constructor
Console::Console(string appName) : _name(std::move(appName)) {}

// Setters

// Getters

// Events
void Console::onStart() {
    system("cls");
    cout << _name << " Version " << _version << "\n";
    // cout << string((getScreenWidth() - _name.size()) / 2, ' ') << _name << "\n";
}
void Console::onExit() {
    cout << _name << "Exited." << endl;
}

// Functionality
void Console::run() {
    onStart();
    while (_running) {
        try {
            string command;
            cout << _name << ">";
            getline(cin, command);

            if (command == "exit") {
                stop();
            } else {
                onStart();
                executeCommand(command);
            }
        }
        catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
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
    }
}

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

void Console::help() {
    cout << "Help Page" << endl;
}

// Destructor
Console::~Console() = default;

