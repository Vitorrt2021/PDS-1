#include <stdio.h>
#include <stdlib.h>

struct humano{
    int idade;
    char nome[100];
    char sexo[1];
    }
struct aluno{
    int num_aluno;
    float nota[3];
    }


int main(){

    
    struct aluno turma1[40];
    struct humano vitor;

    vitor.nome = 'Vitor';
    vitor.idade = 18;
    vitor.sexo = 'M';
    
    printf("%d", vitor.idade);

    return 0;
}