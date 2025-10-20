#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>
#include <string>
using namespace std;

enum class TokenType {
    IDENTIFIER,
    NUMBER,
    OPERATOR,
    ASSIGNMENT,
    PARENTHESIS_L,
    PARENTHESIS_R,
    TERMINATOR,
    INVALID
};

class Token {
private:
    TokenType type;
    string value; // actual value likes "=", "x", "%" etc.
    int position; // position of the character in the input stream

public:
    // Constructors
    Token(); // Default constructor
    Token(TokenType t, string v, int p); // Parameterized constructor

    // Getters
    TokenType getType() const;
    string getValue() const;
    int getPosition() const;

    // Helper function to convert enum to string
    string typeToString() const;

    // Display token info
    void display() const;
};

#endif

