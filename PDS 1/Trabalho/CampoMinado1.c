#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0


int main(){
    int tamanho, jogosRealizados ;
    jogosRealizados =0;
    scanf("%d", &tamanho);
    char campo[tamanho][tamanho];
    char copia[tamanho][tamanho];
    bool estado = true;
    int jogadas[5][2];
    int x=0;
    int y=0;
    int x1 = 0;
    int y1 = 0;    
    int contadorCopia = 0;
    int contadorCampo = 0;    
    
    for(int i=0;i != tamanho;i++){
        for(int j=0;j != tamanho;j++){
            copia[i][j] = 'o';
        }
    }
    for(int i=0;i != tamanho;i++){
        for(int j=0;j != tamanho;j++){
            if(i == j){
                campo[i][j] = 'b';
            }
            else{
                campo[i][j] = 'x';
                contadorCampo +=1;
            }
        }
    }
    while (estado){
        printf("%d \n", jogosRealizados);
        printf("%d \n", tamanho);
        
        if(jogosRealizados != 0){
            for(int i=0;i!=jogosRealizados-1;i++){
                printf("%d ", x1);
                printf("%d \n", y1);
                printf("%d ", jogadas[i-1][1]);
                printf("%d \n", jogadas[i-1][0]);
            }
        }
        contadorCopia = 0;
    for(int i=0;i != tamanho;i++){
        for(int j=0;j != tamanho;j++){
            if(copia[i][j] == 'x'){
                contadorCopia +=1;
            }
        }
    }
    if(contadorCopia == contadorCampo){
        printf("VENCEU \n");
        estado = false;
    } 
        scanf("%d", &x);
        scanf("%d", &y);
        if (jogosRealizados == 0){
            x1 = x;
            y1 = y;
        }
        jogadas[jogosRealizados][0] = x;
        jogadas[jogosRealizados][1] = y;
        jogosRealizados +=1;
       
    if(campo[x][y] == 'b'){
        estado = false;
        printf("PERDEU \n");
    }
    
    if((campo[x][y] =='x') && 
    (campo[x-1][y] == 'x') && 
    (campo[x-1][y-1] == 'x') && 
    (campo[x-1][y+1] == 'x') &&
    (campo[x+1][y] == 'x') && 
    (campo[x+1][y-1] == 'x') && 
    (campo[x+1][y+1] == 'x') &&
    (campo[x][y-1] == 'x')&& 
    (campo[x][y+1] == 'x')
    ){
        if(campo[x][y] =='x'){
            copia[x][y] = 'x' ;
        }
        if(campo[x-1][y] == 'x'){
            copia[x-1][y] = 'x';       
        }
            
        if(campo[x-1][y-1] == 'x'){
            copia[x-1][y-1] = 'x';       
        }
            
        if(campo[x-1][y+1] == 'x'){
            copia[x-1][y+1] = 'x';       
        }
            
        if(campo[x+1][y] == 'x'){
            copia[x+1][y] = 'x';       
        }
            
        if(campo[x+1][y-1] == 'x'){
            copia[x+1][y-1] = 'x';       
        }
            
        if(campo[x+1][y+1] == 'x'){
            copia[x+1][y+1] = 'x';       
        }
            
        if(campo[x][y-1] == 'x'){
            copia[x][y-1] = 'x';       
        }
            
        if(campo[x][y+1] == 'x'){
            copia[x][y+1] = 'x';       
        }
    }
    else if((x == 0) || (y==0) || (x==tamanho-1) || (y==tamanho-1)){
                if(campo[x][y] =='x'){
            copia[x][y] = 'x' ;
        }
        if(campo[x-1][y] == 'x'){
            copia[x-1][y] = 'x';       
        }
            
        if(campo[x-1][y-1] == 'x'){
            copia[x-1][y-1] = 'x';       
        }
            
        if(campo[x-1][y+1] == 'x'){
            copia[x-1][y+1] = 'x';       
        }
            
        if(campo[x+1][y] == 'x'){
            copia[x+1][y] = 'x';       
        }
            
        if(campo[x+1][y-1] == 'x'){
            copia[x+1][y-1] = 'x';       
        }
            
        if(campo[x+1][y+1] == 'x'){
            copia[x+1][y+1] = 'x';       
        }
            
        if(campo[x][y-1] == 'x'){
            copia[x][y-1] = 'x';       
        }
            
        if(campo[x][y+1] == 'x'){
            copia[x][y+1] = 'x';       
        }
    }
     for(int i=0;i != tamanho;i++){
            for(int j=0;j != tamanho;j++){
                printf("%c ", copia[i][j]);
        }
        printf("\n");
        }
    }
    return 0;
}