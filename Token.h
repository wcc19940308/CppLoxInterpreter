//
// Created by 王琛超 on 2020/10/2.
//

#ifndef CRAFTINGINTERPRETER_TOKEN_H
#define CRAFTINGINTERPRETER_TOKEN_H

#include <iostream>
#include <string>

using std::string;

enum TokenType{
    // single-character tokens
    LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
    COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

    // one or two chharacter tokens
    BANG, BANG_EQUAL, // 不等于
    EQUAL, EUQAL_EUQAL,
    GREATER, GREATER_EQUAL,
    LESS, LESS_EQUAL,

    // literals
    IDENTIFIER, STRING, NUMBER,

    // keywords
    AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR,
    PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE,

    END
};

class Token {
public:
    friend std::ostream& operator<<(std::ostream& out, Token& token);
    Token(TokenType type, string& lexeme, string& literal, int line)
            :type_(type), lexeme_(lexeme), literal_(literal), line_(line) {

    }
private:
    TokenType type_;
    string lexeme_;
    string literal_;
    int line_;
};



#endif //CRAFTINGINTERPRETER_TOKEN_H
