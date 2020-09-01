#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() 
{
  float num1,num2,soma,sub,mult,div;
  char ope;

  printf("Escolha o operador que vamos utilizar");
  printf("\nUse os respectivos simbolos e escolha entre +,-,*,/: ");
  scanf("%c",&ope);

  if(ope == '+'){
  printf("\nDigite o numero 1: ");
  scanf("%f",&num1);

  printf("\nDigite o numero 2: ");
  scanf("%f",&num2);

  soma =(num1+num2);

  printf("\nA soma dos dois numero é: %.1f",soma);
  }

  else if(ope == '-'){
  printf("\nDigite o numero 1: ");
  scanf("%f",&num1);

  printf("\nDigite o numero 2: ");
  scanf("%f",&num2);

  sub =(num1-num2);

  printf("\nA subtração dos dois numero é: %.1f",sub);
  }

  else if(ope == '*'){
  printf("\nDigite o numero 1: ");
  scanf("%f",&num1);

  printf("\nDigite o numero 2: ");
  scanf("%f",&num2);

  mult =(num1*num2);

  printf("\nA multiplicação dos dois numero é: %.1f",mult);
  }

  else if(ope == '/'){
  printf("\nDigite o numero 1: ");
  scanf("%f",&num1);

  printf("\nDigite o numero 2: ");
  scanf("%f",&num2);

  div =(num1/num2);

  printf("\nA divisão dos dois numero é: %.1f",div);
  }
  else if(ope != '+' || ope != '-' || ope != '*' || ope != '/')
  {
    printf("Operador invalido");
  }
}