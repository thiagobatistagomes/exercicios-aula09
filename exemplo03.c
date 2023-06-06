#include <stdio.h>
#include <stdlib.h> // atoi, atoll, atof

int main ()
{
    char a[40] = "123";
    char b[40];
    int x;
    float y = 3.14;

    x = atoi(a); // scanf(a, "%d", &x);

    printf("%d\n", x + 1);

    //de numero para string: sprintf
    sprintf(b, "%f", y);

    printf("String B: %s \n", b);

    return 0;
}