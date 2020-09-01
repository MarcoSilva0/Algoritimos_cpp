#include<stdio.h>
#include<stdlib.h>

int main() 
{
  int num1,rest;

  printf("Digite um numero: ");
  scanf("%d",&num1);

  rest=(num1%2);

  if(rest==0){
    printf("é par");
  }
  else if(rest==1){
    printf("é impar");
  }
}