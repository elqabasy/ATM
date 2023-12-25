//
// Created by Mahros on 12/25/2023.
//

#ifndef ATM_CONSOLE_H
#define ATM_CONSOLE_H
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Console {
    private:
        string _name;
        bool _running = true;
        int _updateRate = 10; // ms
        string _version = "0.0.1";
        static map<string, vector<string>> _commands;

    protected:
        // Functionality
        void stop();
        virtual void executeCommand(const string& command);
        static int getScreenWidth();
        static string getOSName();


        // Events
        virtual void onStart();
        virtual void onExit();



    public:
        explicit Console(string appName);
        void run();
        static void help();
        virtual ~Console();
};
#endif //ATM_CONSOLE_H