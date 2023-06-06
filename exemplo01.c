#include <stdio.h>
/*
    argc: c (count) qtd de argumentos
    argv: v (values) valores dos argumentos
    ./saida 7 + 2
*/
int main (int argc, char *argv[])
{  
    int x, y;
    char c;

    sscanf(argv[1], "%d", &x);
    c = argv[2][0];
    sscanf(argv[3], "%d", &y);

    switch(c)
    {
        case '+':
            printf("%d\n", x + y);
            break;
        case '-':
            printf("%d\n", x - y);
            break;
        case 'x':
            printf("%d\n", x * y);
            break;
    }




    return 0;
}