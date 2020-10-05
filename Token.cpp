//
// Created by 王琛超 on 2020/10/2.
//

#include "Token.h"

std::ostream& operator<<(std::ostream& out, Token& token) {
    return out << " " << token.type_ << " " << token.lexeme_ << " " << token.literal_;
}
