#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int x,i,res;
    printf("Ingrese su valor de x,i,res\n"); 
    scanf("%d",&x); scanf("%d",&i); scanf("%d",&res);
    i=2; 
    res = true;

    while (i<x && res)
    {
        res = res && (fmod(x,i)!=0);
        i=i+1;
        printf("Su valor de x,i,res es : %d,%d,%d\n",x,i,res);
    }
    
    return 0;
// Estado inicial : Ingrese su valor de x,i,res : 5, 0, 0
// Iter 1 = Su valor de x,i,res es : 5,3,1
// Iter2 Su valor de x,i,res es : 5,4,1
// Iter3 Su valor de x,i,res es : 5,5,1
}