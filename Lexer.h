#ifndef PUPC_LEXER_H
#define PUPC_LEXER_H


#include "Token.h"

class Lexer {
public:
    const char* m_begin = nullptr;

    explicit Lexer(const char* begin) : m_begin{begin}{}

    Token next();

    [[nodiscard]] char current_char() const {
        return *m_begin;
    }

    char get_next() {
        return *m_begin++;
    }

    Token keyword();
    Token operator_type();
    Token number();
    Token delimiter();
};


#endif //PUPC_LEXER_H