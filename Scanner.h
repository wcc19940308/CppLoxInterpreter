//
// Created by 王琛超 on 2020/10/2.
//

#ifndef CRAFTINGINTERPRETER_SCANNER_H
#define CRAFTINGINTERPRETER_SCANNER_H

#include <string>
#include <vector>

#include "Token.h"
using std::string;
using std::vector;


class Scanner {
public:
    Scanner(string& source):source_(source){}
private:
    string source_;
    vector<Token> tokens_;
};


#endif //CRAFTINGINTERPRETER_SCANNER_H
