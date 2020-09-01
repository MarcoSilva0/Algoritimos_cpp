#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main() 
{

char condiini, pnome[15][25], unome[15][25], cep[15][50],ncasa[15][50], placa[15][7];
int i;

printf("Em um primeiro momento vamos executar a o cadastro dos usuarios;\n");
	printf("---------------------------------------------------------------------------------------------------------------------");
	printf("\nDeseja cadastrar ou sair?\n(C) para cadastrar         (S) para sair:  ");
	scanf("%c",&condiini);

	if(condiini == 'c' or ( condiini == 'C'))
	{
    system("clear");
    for(i=0; i < 15; i++)
    {
      printf("\nDigite o primeiro nome do motorista: ");
      scanf("%s",pnome[i]);

      printf("\nDigite o ultimo nome do motorista: ");
      scanf("%s",unome[i]);
      
      printf("\nDigite a placa do veiculo: ");
      scanf("%s",placa[i]);
      
      printf("\nDigite o cep: ");
      scanf("%s",cep[i]);

      printf("\nDigite o numero da casa: ");
      scanf("%s",ncasa[i]);
      system("clear");
    }    

    for(i=0 ; i < 2 ; i++)
    {
      printf("\nMotorista: %s",pnome[i]);
      printf("%s",unome[i]);
      printf("\nCom veiculo de placa %s",placa[i]);
      printf("\nTem como destino CEP: %s",cep[i]);
      printf("\nLocal de numero: %s\n",ncasa[i]);
    }
  }
  else if(condiini == 's' or (condiini == 'S'))
  {
    printf("Tchau Tchau");
  }
  else if(condiini != 'c' 
	or (condiini != 'C')
	or (condiini != 's') 
	or (condiini != 'S'))
  {
    system("clear");
    printf("operacao invalida, reinicie");
  }
}