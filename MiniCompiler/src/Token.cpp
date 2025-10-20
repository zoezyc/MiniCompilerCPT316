#include "Token.h"
using namespace std;

// Dafault constructor
Token::Token() {
    type = TokenType::INVALID;
    value = "";
    position = -1;
}

// Parameterized constructor
Token::Token(TokenType t, string v, int p){
    type = t;
    value = v;
    position = p;
}

// Getter
TokenType Token::getType() const {
    return type;
}
        
string Token::getValue() const {
    return value;
}

int Token::getPosition() const {
    return position;
}

// Helper function to convert tokentype to string
string Token::typeToString() const {
    switch (type) {
        case TokenType::IDENTIFIER: 
            return "IDENTIFIER";
        case TokenType::NUMBER: 
            return "NUMBER";
        case TokenType::OPERATOR: 
            return "OPERATOR";
        case TokenType::ASSIGNMENT: 
            return "ASSIGNMENT";
        case TokenType::PARENTHESIS_L: 
            return "LEFT PARENTHESIS";
        case TokenType::PARENTHESIS_R: 
            return "RIGHT PARENTHESIS";
        case TokenType::TERMINATOR: 
            return "TERMINATOR";
        case TokenType::INVALID: 
            return "INVALID";
        default: 
            return "INVALID";
    }
}

// Helper function to displays the token's type, value, and position
void Token::display() const {
    cout << "[" << typeToString() << "]: " << value << "(pos: " << position << ")" << endl;
}

