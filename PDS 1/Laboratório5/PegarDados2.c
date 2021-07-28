#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int bool;
#define true 1
#define false 0
    

int main(){
    struct endereco{
        char rua[50];
        unsigned int numero;
        char estado[50]; 
    };

    struct ficha
    {
        char nome[50];
        unsigned int idade;
        float salario;
        struct endereco end;
    };
    struct ficha p[5];
    int contI=0;
    char fazer[50] = "mas";
    char inserir[50] = "inserir";
    char mostrar[50] = "mostrar";
    char alterar[50] = "alterar";
    char saber[50] = "Meu";
    bool encontrado = false;
    int esse=0;
    while(fgets(fazer, 50, stdin) != NULL){
        //fgets(fazer,15,stdin);
        if(fazer[0]==inserir[0] && fazer[1]==inserir[1] && fazer[2]==inserir[2])
        {
            if(contI<5)
            {
                scanf("%s",p[contI].nome);
                scanf("%u",&p[contI].idade);
                scanf("%f",&p[contI].salario);
                scanf("%s",p[contI].end.rua);
                scanf("%u",&p[contI].end.numero);
                scanf("%s",p[contI].end.estado);
                printf("Registro %s ",p[contI].nome);
                printf("%u ",p[contI].idade);
                printf("%.2f ",p[contI].salario);
                printf("%s ",p[contI].end.rua);
                printf("%u ",p[contI].end.numero);
                printf("%s inserido \n",p[contI].end.estado);
                contI +=1;
            }
            else{
                printf("Espaco insuficiente \n");
            }

        }
        else if(fazer[0]==mostrar[0] && fazer[1]==mostrar[1] && fazer[2]==mostrar[2])
        {
            char n[67];
            scanf("%s", n);
            encontrado=false;
            int h=0;
            while(h<5){
                if(strcmp(p[h].nome,n)==0){
                    
                    printf("Registro %s ",p[h].nome);
                    printf("%u ",p[h].idade);
                    printf("%.2f ",p[h].salario);
                    printf("%s ",p[h].end.rua);
                    printf("%u ",p[h].end.numero);
                    printf("%s \n",p[h].end.estado);

                    encontrado = true;
                    esse = h;
                                   
                    break;
                }
                h+=1;
            }
             if(!encontrado){
                printf("Registro ausente \n");
            }
    
        }
        
        else if(fazer[0]==alterar[0] && fazer[1]==alterar[1] && fazer[2]==alterar[2])
        {
            
            if(!encontrado){
                printf("Registro ausente para alteracao \n");
            }        
            else if((fazer[0]==alterar[0] && fazer[1]==alterar[1] && fazer[2]==alterar[2]))
            {
                scanf("%s",p[esse].nome);
                scanf("%u",&p[esse].idade);
                scanf("%f",&p[esse].salario);
                scanf("%s",p[esse].end.rua);
                scanf("%u",&p[esse].end.numero);
                scanf("%s",p[esse].end.estado);

                printf("Registro %s ",p[esse].nome);
                printf("%u ",p[esse].idade);
                printf("%.2f ",p[esse].salario);
                printf("%s ",p[esse].end.rua);
                printf("%u ",p[esse].end.numero);
                printf("%s alterado \n",p[esse].end.estado); 
                esse=0;                
            }
        } 
    }

   

    return 0;
}