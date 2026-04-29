#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    const char *src = "int main";
    int pos = 0;
    char buf[64];
    int len = 0;
    while (src[pos] != '\0'){
       while  (src[pos] == ' ')
       pos++; 
    while (isalpha(src[pos])){
        buf[len] = src[pos];
        len++;
        pos++;
    }
    
    buf[len] = '\0';
    printf("%s\n", buf); 
    len = 0;
      
    if (strcmp(buf, "int") == 0) 
    {
    printf("TOK_INT\n");
} 
else if (strcmp(buf, "return") == 0) 
{
    printf("TOK_RETURN\n");
} 
else 
{
    printf("TOK_IDENT: %s\n", buf);
}



    }
        
    
}

