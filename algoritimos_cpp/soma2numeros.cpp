#include <iostream>
#include<stdio.h>
#include<stdlib.h>

int main() {
  float num1,num2,resultado;

  printf("Digite um nuemro: ");
  scanf("%f",&num1);

  printf("\nDigite outro numero: ");
  scanf("%f",&num2);

  //system("cls");

  resultado=(num1+num2);

  printf("\nA soma dos numero é %.1f",resultado);
}