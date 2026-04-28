#include "lexer.h"
Token get_next_token(const char *src, int *pos){ 
    Token t;
    while (src[*pos] == ' ' || src[*pos] == '\t' || src[*pos] == '\n')
    {
        (*pos)++;
    }
    switch (src[*pos])
    {
        case '(':
            t.type = TOK_LPAREN;
            t.value[0] = '(';
            t.value[1] = '\0';
            (*pos)++;
            break;
        case ')':
            t.type = TOK_RPAREN;
            t.value[0] = ')';
            t.value[1] = '\0';
            (*pos)++;
            break;
        case '{':
            t.type = TOK_LBRACE;
            t.value[0] = '{';
            t.value[1] = '\0';
            (*pos)++;
            break;
        case '}':
            t.type = TOK_RBRACE;
            t.value[0] = '}';
            t.value[1] = '\0';
            (*pos)++;
            break;
        case ';':
            t.type = TOK_SEMICOLON;
            t.value[0] = ';';
            t.value[1] = '\0';
            (*pos)++;
            break;
        case '\0':
        t.type = TOK_EOF;
            t.value[0] = '\0';
            t.value[1] = '\0';
            break;


    }
return t;
}
