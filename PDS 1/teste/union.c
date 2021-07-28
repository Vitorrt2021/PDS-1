#include <stdio.h>
#include <stdlib.h>

int main()
{
    // diferença entre ela e structs reserva espaço de memoria para seu maior elemento
    // e compartilha essa memoria com os demais
    
    union nome_union
    {
        int idade;
        char nome[20];
    }
    union tipo{
        short int x;
        unsigned char c;
    }
    
    union tipo t;

    enum cor {vermelho,verde,branco,amarelo};

    enum cor c;
    c = vermelho;

    typedef int inteiro;

    inteiro mais=45;



    return 0;
}