#include <iostream>

int main() {
  float km,l,cm;
  
  printf("Vamos calcular o consumo medio de seu automovel");
  printf("\n Me diga a distancia percorrido pelo mesmo em KM: ");
  scanf("%f",&km);

  printf("Agora informe quantos litros foi gasto: ");
  scanf("%f",&l);

  cm= km / l;

  printf("O consumo médio nesse trajeto foi de: %.1f",cm);


}