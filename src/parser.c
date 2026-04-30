#include "parser.h"
#include "lexer.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FunctionNode parse(const char *src)
{
    FunctionNode node;
    int pos = 0;
    Token t;

    //Step 1, we need token int

    t = get_next_token(src, &pos);
    if (t.type != TOK_INT)
    {
        printf("Error, Expected 'int'\n");
        exit(1);
    }
     t = get_next_token(src, &pos);
    if (t.type != TOK_IDENT)
    {
        printf("Error, Expected 'Function Name'\n");
        exit(1);
    }
    strcpy(node.name,t.value);
   
    t = get_next_token(src, &pos);
    if (t.type != TOK_LPAREN)
    {
        printf("Error, Expected '('\n");
        exit(1);
    
    }
    t = get_next_token(src, &pos);
    if (t.type != TOK_RPAREN)
    {
        printf("Error, Expected ')'\n");
        exit(1);
    }
    t = get_next_token(src, &pos);
    if (t.type != TOK_LBRACE)
    {
        printf("Error, Expected '{'\n");
        exit(1);
    }
     t = get_next_token(src, &pos);
     if (t.type != TOK_RETURN)
    {
        printf("Error, Expected 'return'\n");
        exit(1);
    }
    t = get_next_token(src, &pos);
    if (t.type != TOK_NUMBER)
    {
        printf("Error, Expected 'Number'\n");
        exit(1);
    }
        node.body.value = atoi(t.value);
     t = get_next_token(src, &pos);
     if (t.type != TOK_SEMICOLON)
    {
        printf("Error, Expected ';'\n");
        exit(1);
    
    }
     t = get_next_token(src, &pos);
     if (t.type != TOK_RBRACE)
    {
        printf("Error, Expected '}'\n");
        exit(1);
    
    }
    return node;


}

