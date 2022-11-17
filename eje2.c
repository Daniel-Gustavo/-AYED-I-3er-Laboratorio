#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 
int main(void)
{
    int x, y, z, b, w;
    printf("ingrese el valor de x\n");
    scanf("%d", &x);
    printf("ingrese el valor para y\n");
    scanf("%d", &y);
    printf("ingrese el valor para z\n");
    scanf("%d", &z);
    printf("ingrese el valor para b\n");
    scanf("%d", &b);
    printf("ingrese el valor para w\n");
    scanf("%d", &w);

bool Ej2a = x % 4 == 0;
bool Ej2b = x + y == 0 && y - x == (-1)*z;
bool Ej2c = !b && w;

printf("el resultado del primer ej.  es:%i\n", Ej2a);
printf("el resultado del segundo ej. es:%i\n", Ej2b);
printf("el resultado del tercer ej.  es:%i\n", Ej2c);
return 0;
}