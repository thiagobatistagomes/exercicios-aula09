//EXEMPLO isupper()

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
 
    c = 'G'; //maiúsculo
    printf("%d\n", isupper(c));
 
    c = 'i';
    printf("%d\n", isupper(c));
 
    c = '\n';
    printf("%d\n", isupper(c));
 
    c = 'M'; //maiúsculo
    printf("%d\n", isupper(c));
 
    return 0;
}