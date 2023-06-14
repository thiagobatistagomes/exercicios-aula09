#include <stdio.h>
#include <string.h>


int main ()
{
    char frase[100];
    int j;

    scanf(" %[^\n]", frase);

    j = strlen(frase) - 1;
  

    while(j >= 0)
    {   
        printf("%c", frase[j]);
        j--;
    }
    
    printf("\n");

    return 0;
}