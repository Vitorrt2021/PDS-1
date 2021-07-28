#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0

int main(){

    int repeticoes;
    int vezes=0;
    scanf("%d",&repeticoes);
    while(vezes < repeticoes)
    {
        int tam;
        int contagem=0;
        bool perdeu=false;
        int vazio=0;
        scanf("%d", &tam);
        int matriz[tam][tam];
        int teste[tam][tam];
        int cont=0;    
        for(int i=0;i<tam;i++)
        {
            for(int j=0;j<tam;j++)
            {
                char c;
                scanf("%c", &c);
                matriz[i][j] = c;
                if(matriz[i][j] == 10 || matriz[i][j] ==32)
                {
                    j=j-1;
                }
                if(c=='x')
                {
                    vazio+=1;
                }

            }
        }
        matriz[0][0] = 120;
        
        for(int i=0;i<tam;i++)
        {
            for(int j=0;j<tam;j++)
            {
                teste[i][j] = 97;
            }
        }
        /*
        for(int i=0;i<tam;i++)
        {
            for(int j=0;j<tam;j++)
            {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        */
        
        int nJogadas,l,c;
        int contar=0;
        scanf("%d",&nJogadas);
        while((!perdeu) && (contar < nJogadas))
        {
            scanf("%d",&l);
            scanf("%d",&c);
            if((!perdeu) && (matriz[l][c]== 98))
            {
                perdeu = true;
            }
            else
            {
                if((teste[l][c]==97) && (matriz[l][c] == 120))
                {
                    teste[l][c] = 120;
                    contagem+=1;
                }
                else if(matriz[l][c] == 120 && (
                        matriz[l-1][c-1] == 98 ||
                        matriz[l-1][c] == 98 ||
                        matriz[l-1][c+1] == 98 ||
                        matriz[l][c-1] == 98 || 
                        matriz[l][c+1] == 98 ||
                        matriz[l+1][c-1] == 98 ||
                        matriz[l+1][c] == 98 ||
                        matriz[l+1][c+1] == 98)
                    )
                    {
                        matriz[l][c] = matriz[l][c];
                    }
                else
                    {
                        
                        
                        if(l>0){
                            if(c>0){
                                if(matriz[l-1][c-1] == 120 && teste[l-1][c-1] == 97 )
                                {
                                 teste[l-1][c-1] = 120;
                                    contagem +=1;
                                }
                            }
                        }
                            if(matriz[l-1][c] == 120 && teste[l-1][c] == 97)
                                    {
                                     teste[l-1][c-1] = 120;
                                    contagem+=1;

                                    }
                        if(c+1<tam){                            
                            if(matriz[l-1][c+1] == 120 && teste[l-1][c+1] == 97)
                                    {
                                        contagem +=1;
                                     teste[l-1][c+1] == 120;

                                    }
                        }

                        if(c>0){
                            if(matriz[l][c-1] == 120 && teste[l][c-1] == 97)
                                {
                                    contagem +=1;
                                 teste[l][c-1] == 120;
        
                                }
                        }
                        if(c+1<tam){
                            if(matriz[l][c+1] == 120 && teste[l][c+1] == 97)
                                {
                                    contagem +=1;
                                 teste[l][c+1] == 120;
                                }
                        }

                        if(l+1<tam){
                            if(c>0){
                                if(matriz[l+1][c-1] == 120 && teste[l+1][c-1] == 97)
                                    {
                                        contagem +=1;
                                     teste[l+1][c-1] == 120;
                                    }
                                }
                                if(matriz[l+1][c] == 120 && teste[l+1][c] == 97)
                                    {
                                        contagem +=1;
                                     teste[l+1][c] == 120;
                                    }
                    if(c+1<tam){
                            if(matriz[l+1][c+1] == 120 && teste[l+1][c+1] == 97)
                            {
                                contagem +=1;
                             teste[l+1][c+1] == 120;
                            }

                            }
                    
                        }
                    }  
            }
            contar+=1;
        }

        


        if(perdeu)
        {
            printf("PERDEU \n");
        }
        else if(vazio == contagem)
        {
            printf("GANHOU \n");
        }
        else 
        {
            printf("FALTOU TERMINAR \n");
        }







    vezes+=1;
    }
    return 0;
}