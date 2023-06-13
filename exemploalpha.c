//EXEMPLO isalpha()

#include <stdio.h>											
#include <ctype.h>

int main()
{
   char c;
   c = 'I';
   printf("letra maiuscula presente no alfabeto retorna: %d\n", isalpha(c));

   c = 'i';
   printf("letra minuscula presente no alfabeto retorna: %d\n", isalpha(c));

   c=',';
   printf("caractere nao presente no alfabeto retorna: %d\n", isalpha(c));

   return 0;
}