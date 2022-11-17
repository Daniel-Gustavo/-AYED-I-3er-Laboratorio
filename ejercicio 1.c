#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x, y;
    printf("Digite x: \n");
    scanf("%d", &x);
    printf("Digite y:\n");
    scanf("%d", &y);

    if (x>=y)
    {
        x = 0;
    }
    else if ( x<=y)
    {
        x = 2;
    };
    printf(" Su valor de x es: %d\n", x);
return 0;
}