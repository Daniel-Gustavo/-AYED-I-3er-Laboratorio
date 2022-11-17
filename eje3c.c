#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main (void)
{
    int x, y, a, b;
    printf("ingrese un valor para x: ");
    scanf("%d", &x);
    printf("ingrese un valor para y: ");
    scanf("%d", &y);

    b = y + y;
    printf("el nuevo valor de y es: %i\n", b);

    a = x + y;
    printf("el nuevo valor de x es: %i\n", a);
    

    return 0;
}