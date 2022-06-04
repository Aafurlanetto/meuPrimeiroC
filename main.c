#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
//declarar todas variavel
float raio, volume;

// declarar o raio
printf("digite o valor do raio=>");
scanf("%f",&raio);
//fazer o calculo do volume

volume= 1/3*3.14*pow(raio,3);
//mostrar o volume
printf("%i",volume);

    return 1;
    
    
}
