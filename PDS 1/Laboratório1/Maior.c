#include <stdio.h>
#include <stdlib.h>

int main(){
    int maior,x,y,z;
    
    scanf("%i", &x);
    scanf("%i", &y);
    scanf("%i", &z);
    maior = x;
    if (y >= maior){
        maior = y;
    }
    if(z >= maior){
        maior = z;
    }
    printf("%i", maior);

    return 0;
}