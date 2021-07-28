#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
#define true 1
#define false 0
    

int main(){

    struct ficha
    {
        char nome[50];
        unsigned int idade;
        float salario;
    };
    struct ficha p[4];
    int contI=0;
    int contM=0;
    char fazer[50];
    char inserir[50] = "inserir";
    char mostrar[50] = "mostrar";
    bool encontrado = false;
    while(fgets(fazer, 50, stdin) != NULL){
        //fgets(fazer,15,stdin);
        if(fazer[0]==inserir[0] && fazer[1]==inserir[1] && fazer[2]==inserir[2])
        {
            if(contI<4)
            {
                scanf("%s",p[contI].nome);
                scanf("%u",&p[contI].idade);
                scanf("%f",&p[contI].salario);
                printf("Registro %s ",p[contI].nome);
                printf("%u ",p[contI].idade);
                printf("%.2f inserido\n",p[contI].salario);
                contI +=1;
            }
            else{
                printf("Espaco insuficiente \n");
            }
        }
        if(fazer[0]==mostrar[0] && fazer[1]==mostrar[1] && fazer[2]==mostrar[2])
        {
            char n[67];
            scanf("%s", n);
            encontrado=false;
            for(int h=0;h<4;h++){
                if(strcmp(p[h].nome,n)==0){
                    printf("Registro %s ",p[h].nome);
                    printf("%u ",p[h].idade);
                    printf("%.2f \n",p[h].salario);
                    encontrado = true;
                }
            }
            if(!encontrado){
                printf("Registro ausente \n");
            }
    
        }
    }

   

    return 0;
}