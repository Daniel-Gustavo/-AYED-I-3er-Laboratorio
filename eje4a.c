#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x, y;
    printf("ingrese un numero: ");
    scanf("%d", x);
    printf("ingrese el segundo numero: ");
    scanf("%d", y);

    if (x>=y)
    {
    x = 0;
    }
    else if (x<=y)
    {
     x = 2;
    };
    printf("el nuevo valor de x es: %d\n",x);
    return 0;
}