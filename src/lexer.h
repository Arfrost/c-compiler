#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
 TOK_INT,
 TOK_RETURN,
 TOK_IDENT,
 TOK_NUMBER,
 TOK_LPAREN,
 TOK_RPAREN,
 TOK_LBRACE,
 TOK_RBRACE,
 TOK_SEMICOLON,
 TOK_EOF   
} TokenType ;

typedef struct {
    TokenType type;
    char value[64];
} Token;

#endif