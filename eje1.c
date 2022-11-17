#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void)
{
    int x, y, z;
    printf("ingrese el valor de x\n");
    scanf("%d", &x);
    printf("ingrese el valor para y\n");
    scanf("%d", &y);
    printf("ingrese el valor para z\n");
    scanf("%d", &z);

int ej1a = x + y + 1;
int ej1b = z*z+y*45-15*x;
int ej1c = y - 2 == (x*3+1) % 5;
int ej1d = y / 2*x;
int ej1e = y < x* z;

printf("el resultado del primer ej.  es:%i\n", ej1a);
printf("el resultado del segundo ej. es:%i\n", ej1b);
printf("el resultado del tercer ej.  es:%i\n", ej1c);
printf("el resultado del cuarto ej.  es:%i\n", ej1d);
printf("el resultado del quinto ej.  es:%i\n", ej1e);
return 0;
}