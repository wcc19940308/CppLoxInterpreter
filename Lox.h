//
// Created by 王琛超 on 2020/10/2.
//

#ifndef CRAFTINGINTERPRETER_LOX_H
#define CRAFTINGINTERPRETER_LOX_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using std::string;

class Lox {
public:
    static bool hasErrpr;
    static void runFile(char* path);
    static void runPrompt();
    static void run(string& source);
    static void error(int line, string& message);
    static void report(int line, string& where, string& message);
};

#endif //CRAFTINGINTERPRETER_LOX_H
