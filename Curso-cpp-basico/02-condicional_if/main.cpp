#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int dinheiro = 9;

    if(dinheiro > 10){
        printf("Eu vou ao cinema");
    }else{
        printf("Não vou ao cinema");
    }    
    return 0;
}