#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main(){
 int i, j, m[3][3];
 
 for(i=0;i<3;i++)
 for(j=0;j<3;j++){
 printf("Digite somente numeros inteiros [%d][%d]= ",i,j);
 scanf("%d",&m[i][j]);
 }
 
 printf("\nOs numeros digitados foram\n");
 for(i=0;i<3;i++){
 for(j=0;j<3;j++)
 printf("%d ",m[i][j]);
 printf("\n");
 }
 
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 m[i][j]=m[i][j]*5;
 
 printf("\nSua multiplicação por 5 será\n");
 for(i=0;i<3;i++){
 for(j=0;j<3;j++)
 printf("%d ",m[i][j]);
 printf("\n");
 }
 return 0;
}

