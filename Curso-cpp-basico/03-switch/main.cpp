#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int num = 10;

    switch (num)
    {
    case 9:
        printf("Numero 9");
        break;
    case 10:
        printf("Numero 10");
        break;
    case 11:
        printf("Numero 11");
        break;
    
    default:
        break;
    }
}