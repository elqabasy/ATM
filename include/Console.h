//
// Created by Mahros on 12/25/2023.
//

#ifndef ATM_CONSOLE_H
#define ATM_CONSOLE_H
#include <iostream>
#include <string>
#include "Help.h"
#include <vector>
#include <map>

using namespace std;

class Console {
    private:
        string _name;
        string _branch;
        bool _running = true;
        int _updateRate = 10; // ms
        string _version = "0.0.1";
        // vector<map<string, Help>> _commands = {};
    public:
        // Constructor
        explicit Console(string);

        // Functionality
        void run();
        void stop();
        virtual void executeCommand(const string& command);

        // Setters
        void setName(const string& name);
        void appendCommandHelp(Help help);
        void setUpdateRate(int updateRate);
        void setBranch(const string& branch);
        void setCommandHelp(const string& command, Help help);
        void setCommandsHelp(vector<map<string, Help>> commands);

        // Getters
        string getName();
        string getBranch();
        int getUpdateRate();
        static string getOSName();
        static int getScreenWidth();
        Help getCommandHelp(const string& command);
        vector<map<string, Help>> getCommandsHelp();


        // Events
        virtual void onStart();
        virtual void onExit();

        // Commands
        virtual void help();

        // Destructor
        ~Console();
};
#endif //ATM_CONSOLE_H
