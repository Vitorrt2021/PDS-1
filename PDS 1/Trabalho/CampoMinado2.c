

#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0

int main()
{

    int quantidade;
    scanf("%d",&quantidade);
    for(int mesmo=0;mesmo<quantidade;mesmo++)
    {
        bool perdeu = false;
        int tam;
        int contador =0;
        int contadorLimpo=0;
        scanf("%d", &tam); 


        int matriz[tam][tam];
        int copia[tam][tam];
        int co=0;
        for(int i=0;i<tam;i++){
            for(int c=0;c<tam;c++){
                char ar;
                scanf("%c",&ar);
                if(co==0){
                    c = -1;
                    co +=1;
                }
                if(ar != ' ')
                {
                    matriz[i][c] = ar;
                    
                    if(ar = 'x')
                    {
                        contadorLimpo+=1;
                    }
                }
                else{
                    c-=1;
                } 
            }
        }
        matriz[0][0] = 120;
        
        for(int i=0;i<tam;i++){
            for(int c=0;c<tam;c++){
                copia[i][c]= 97;
            }
        }

        int nJogadas;
        scanf("%d", &nJogadas);
        int x,y;
        int ui=0;
        while((!perdeu) && (ui<nJogadas))
        {
            
            scanf("%d", &x);
            scanf("%d", &y);
            if(matriz[y][x] != 120 )
            {
                perdeu = true;
                printf("PERDEU \n");
            }
            else if((!perdeu) && (copia[y][x] == 97))
            {
                    if (copia[y][x] == 97){
                            copia[y][x] = 120;
                            contador +=1;
                        }
                    if(matriz[y][x] == 120 && 
                        matriz[y-1][x-1] != 98 &&
                        matriz[y-1][x] != 98 &&
                        matriz[y-1][x+1] != 98 &&
                        matriz[y][x-1] != 98 && 
                        matriz[y][x+1] != 98 &&
                        matriz[y+1][x-1] != 98 &&
                        matriz[y+1][x] != 98 &&
                        matriz[y+1][x+1] != 98
                    )
                    {
                        
                        
                        if(y>0){
                            if(x>0){
                                if(matriz[y-1][x-1] == 120 && copia[y-1][x-1] == 97 )
                                {
                                    copia[y-1][x-1] = 120;
                                    contador +=1;
                                }
                            }
                        }
                            if(matriz[y-1][x] == 120 && copia[y-1][x] == 97)
                                    {
                                        copia[y-1][x-1] = 120;
                                        contador+=1;

                                    }
                        if(x+1<tam){                            
                            if(matriz[y-1][x+1] == 120 && copia[y-1][x+1] == 97)
                                    {
                                        contador +=1;
                                        copia[y-1][x+1] == 120;

                                    }
                        }

                        if(x>0){
                            if(matriz[y][x-1] == 120 && copia[y][x-1] == 97)
                                {
                                    contador +=1;
                                    copia[y][x-1] == 120;
        
                                }
                        }
                        if(x+1<tam){
                            if(matriz[y][x+1] == 120 && copia[y][x+1] == 97)
                                {
                                    contador +=1;
                                    copia[y][x+1] == 120;
                                }
                        }

                        if(y+1<tam){
                            if(x>0){
                                if(matriz[y+1][x-1] == 120 && copia[y+1][x-1] == 97)
                                    {
                                        contador +=1;
                                        copia[y+1][x-1] == 120;
                                    }
                                }
                                if(matriz[y+1][x] == 120 && copia[y+1][x] == 97)
                                    {
                                        contador +=1;
                                        copia[y+1][x] == 120;
                                    }
                    if(x+1<tam){
                            if(matriz[y+1][x+1] == 120 && copia[y+1][x+1] == 97)
                            {
                                contador +=1;
                                copia[y+1][x+1] == 120;
                            }

                            }
                    
                        }
                    }  
            }
            ui+=1;
        }
        if((contadorLimpo > contador) && (!perdeu)){
            printf("FALTOU TERMINAR \n");
        }
        if((contadorLimpo == contador) && (!perdeu)){
            printf("VENCEU \n");
        }
        
        
    }
    return 0;
}
            
        
    