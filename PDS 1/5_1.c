#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct pessoa{
    char nome[50];
    unsigned int idade;
    float salario;
} 

int main()
{
    char estado[15];

    scanf("%s", estado);
    printf("%s", estado);
    if(estado =='inserir'){
        printf("Certo");
    }

}