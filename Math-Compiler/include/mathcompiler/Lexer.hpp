#pragma once
#include "../PCH.hpp"

enum class TokenType : int
{
    NOT_A_TOKEN = -1,

    NEWLINE,
    
    VARIABLE,
    NUMBER,
    
    OPEN_PAREN,
    CLOSE_PAREN,
    ABS,

    EQUAL,
    PLUS,
    MINUS,
    MULTIPLY,
    DIVIDE,
    EXPONENT,

    FACTORIAL,
    
    MOD,
    GENERIC_FUNC,
    LOG
};

struct Token
{
    TokenType type;
    std::string value;
};

std::vector<Token> tokenizeSource(const std::string& src);