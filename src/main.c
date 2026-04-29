#include <stdio.h>
#include "lexer.h"

int main ()
{
const char *src = "int main";
int pos = 0;
Token t;
do {
    t = get_next_token(src, &pos);
    printf("token: %s\n", t.value);
} while (t.type != TOK_EOF);


}
