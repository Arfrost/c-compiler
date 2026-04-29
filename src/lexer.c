#include "lexer.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
Token get_next_token(const char *src, int *pos){ 
    Token t;
    while (src[*pos] == ' ' || src[*pos] == '\t' || src[*pos] == '\n')
    {
        (*pos)++;
    }
    if (isalpha(src[*pos]))
    {

    char buf[64];
    int len = 0;
    while (isalpha(src[*pos]))
    {
        buf[len] = src[*pos];
        len++;
        (*pos)++;
    }
    
    buf[len] = '\0';
      
if (strcmp(buf, "int") == 0) 
{
    t.type = TOK_INT;
} 
else if (strcmp(buf, "return") == 0) 
{
    t.type = TOK_RETURN;
} 
else 
{
    t.type = TOK_IDENT;
}
strcpy(t.value, buf);
return t;


    
        
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
