#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main(){
int i, v[5];
for(i=0;i<5;i++){

printf("Digite um numero inteiro[%d]= ",i);
scanf("%d",&v[i]);

}

printf("\nDigite os valores a serem invertidos originais\n");

for(i=0;i<5;i++)

printf("%d\n",v[i]);
printf("\nOs valore em sua orndem inversa são\n");

for(i=4;i>=0;i--)
printf("%d\n",v[i]);
return 0;

}
