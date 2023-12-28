//
// Created by Mahros on 12/28/2023.
//

#ifndef ATM_HELP_H
#define ATM_HELP_H
#include <vector>
#include <iostream>
using namespace std;

class Help {
    private:
        string _name;
        static string _tab;
        static string _newLine;
        string _longDescription;
        string _shortDescription;
        vector<string> _syntax;
        vector<string> _onlineHelp;
        vector<string> _parameters;
    public:
        // Constructor
        explicit Help(string name, string shortDescription = "", string longDescription = "", const vector<string>& syntax = {}, const vector<string>& parameters = {}, const vector<string>& onlineHelp = {});


        // Functionality
        void displayHelp();
        static string cleanText(string text);
        static string CONCAT_VECTOR(const vector<string>&);


        // Setters
        bool setName(string);
        bool setSyntax(const vector<string>&);
        bool setParameters(const vector<string>&);
        bool setOnlineHelp(const vector<string>&);
        bool setLongDescription(string);
        bool setShortDescription(string);

        bool appendSyntax(string);
        bool appendParameter(string);
        bool appendOnlineHelp(string);
        bool appendLongDescription(string);
        bool appendShortDescription(string);

        // Getters
        string getName();
        string getSyntax();
        string getParameters();
        string getOnlineHelp();
        string getLongDescription();
        string getShortDescription();

        // Destructor
        ~Help();
};


#endif //ATM_HELP_H
