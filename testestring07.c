#include <stdio.h>

int main ()
{
    char frase [] = "sao 2 esquilos e 40 bodes na lista de mais de 240 animais resgatados do espaco";
    int numero1, numero2, numero3;

    sscanf(frase,"%*[^0-9]%d%*[^0-9]%d%*[^0-9]%d", &numero1, &numero2, &numero3);

    printf("%d %d %d", numero1, numero2, numero3);

    return 0;
}