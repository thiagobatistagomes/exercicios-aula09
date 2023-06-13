//EXEMPLO islower()

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
 
    c='i'; //letra minúscula
    printf("%d\n", islower(c));
 
    c='S';
    printf("%d\n", islower(c));
 
     c='*';
    printf("%d\n", islower(c));
 
     c='p'; //letra minúscula
    printf("%d\n", islower(c));
 
    return 0;
}