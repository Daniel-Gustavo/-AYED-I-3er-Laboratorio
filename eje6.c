#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool pedirBooleano (void){
    bool x;
    int b;  
    printf("Ingresa tu booleano:\n"); scanf("%d", &b);
    x = b;
    return x;
};
void imprimeBooleano (bool x){
    if (x == true)
    {
        printf("Verdadero\n");
    }
    else if (x == false){
        printf("Falso\n");
    }
};

int main(void)
{
    imprimeBooleano(pedirBooleano());
return 0;
}