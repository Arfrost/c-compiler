#include <stdio.h>
#include "lexer.h"
#include "parser.h"
#include <stdlib.h>

int main ()
{
const char *src = "int main() { return 2; }";
int pos = 0;
Token t;
do {
    t = get_next_token(src, &pos);
    printf("token: %s\n", t.value);
} while (t.type != TOK_EOF);

FunctionNode fn = parse(src);
printf("Function name: %s\n", fn.name);
printf("Return value: %d\n", fn.body.value);

}
