//
// Created by Mahros on 12/28/2023.
//

#include <cctype>
#include <algorithm>
#include "../include/Help.h"

// Static
string Help::_tab = "    ";
string Help::_newLine = "\n";

// Constructor
Help::Help(string name, string shortDescription, string longDescription, const vector<string>& syntax, const vector<string>& parameters, const vector<string>& onlineHelp){
    setName(std::move(name));
    setShortDescription(std::move(shortDescription));
    setLongDescription(std::move(longDescription));
    setSyntax(syntax);
    setParameters(parameters);
    setOnlineHelp(onlineHelp);
}

// Functionality
void Help::displayHelp() {
    cout << _newLine;
    cout << "NAME" << _newLine;
    cout << _tab << getName() << _newLine;

    // choose

    if (!_shortDescription.empty()) {
        cout << _newLine;
        cout << "SHORT DESCRIPTION" << _newLine;
        cout << _tab << getShortDescription() << _newLine;
    }

    if(!_longDescription.empty()){
        cout << _newLine;
        cout << "LONG DESCRIPTION" << _newLine;
        cout << _tab << getLongDescription() << _newLine;
    }

    if(!_syntax.empty()){
        cout << _newLine;
        cout << "SYNTAX" << _newLine;
        cout << _tab << getSyntax() << _newLine;
    }

    if(!_parameters.empty()) {
        cout << _newLine;
        cout << "PARAMETERS" << _newLine;
        cout << _tab << getParameters() << _newLine;
    }

    if (!_onlineHelp.empty()) {
        cout << _newLine;
        cout << "ONLINE HELP" << _newLine;
        cout << _tab << getOnlineHelp() << _newLine;
        cout << _newLine;
    }
    cout << _newLine;
}
string Help::cleanText(string text) {
    // convert all characters to title case without for loop
    // trim leading and trailing spaces
    text.erase(text.begin(), find_if(text.begin(), text.end(), [](int ch) {
        return !isspace(ch);
    }));
    return text;
}
string Help::CONCAT_VECTOR(const vector<string>& v) {
    // concatenate all syntax into one string and separate every item by new line
    string syntax;
    for (const auto& item : v) {
        syntax += item;
        if (item != v.back()) {
            syntax += _newLine;
        }
    }
    return syntax;
}

// Setters
bool Help::setName(string name) {
    name = cleanText(name);
    _name = name;
    return true;
}
bool Help::setSyntax(const vector<string>& syntax) {
    _syntax = syntax;
    return _syntax == syntax;
}
bool Help::setParameters(const vector<string>& parameters) {
    _parameters = parameters;
    return _parameters == parameters;
}
bool Help::setOnlineHelp(const vector<string>& onlineHelp) {
    _onlineHelp = onlineHelp;
    return _onlineHelp == onlineHelp;
}
bool Help::setLongDescription(string longDescription) {
    longDescription = cleanText(longDescription);
    _longDescription = longDescription;
    return _longDescription == longDescription;
}
bool Help::setShortDescription(string shortDescription) {
    shortDescription = cleanText(shortDescription);
    _shortDescription = shortDescription;
    return _shortDescription == shortDescription;
}

bool Help::appendSyntax(string syntax) {
    syntax = cleanText(syntax);
    _syntax.push_back(syntax);
    return _syntax.back() == syntax;
}
bool Help::appendParameter(string parameter) {
    parameter = cleanText(parameter);
    _parameters.push_back(parameter);
    return _parameters.back() == parameter;
}
bool Help::appendOnlineHelp(string onlineHelp) {
    onlineHelp = cleanText(onlineHelp);
    _onlineHelp.push_back(onlineHelp);
    return _onlineHelp.back() == onlineHelp;
}
bool Help::appendLongDescription(string longDescription) {
    longDescription = cleanText(longDescription);
    _longDescription += longDescription;
    return true;
}
bool Help::appendShortDescription(string shortDescription) {
    shortDescription = cleanText(shortDescription);
    _shortDescription += shortDescription;
    return true;
}


// Getters
string Help::getName() {
    return _name;
}
string Help::getSyntax() {
    return CONCAT_VECTOR(_syntax);
}
string Help::getParameters() {
    return CONCAT_VECTOR(_parameters);
}
string Help::getOnlineHelp() {
    return CONCAT_VECTOR(_onlineHelp);
}
string Help::getLongDescription() {
    return _longDescription;
}
string Help::getShortDescription() {
    return _shortDescription;
}

// Destructor
Help::~Help() = default;