#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()  
{

float soma,notas,media[40];
int contador[40],i[40];
 soma=0; 

for(int i=0;i<40;i++){
printf(" \n\t Entre com as três notas :\n");

 for(int contador = 0;contador < 40; contador++) 
     {
       scanf("%f",&notas);
       soma=soma+notas;
       contador++;
      }
media[i++]=soma/3;
printf("Média = %.1f ",media[i++]);
}
}