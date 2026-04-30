#ifndef PARSER_H

#define PARSER_H

typedef enum 
{
NODE_FUNCTION,
NODE_RETURN
} NodeType;

typedef struct
{
    int value;
} ReturnNode;

typedef struct
{
char name[64];
ReturnNode body;

} FunctionNode;

FunctionNode parse(const char *src);
#endif 