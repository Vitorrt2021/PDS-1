#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int inversa[10];
    for(int i=0; i < 10; i++)
    {
        scanf("%d", &vetor[i] );
        inversa[9-i] = vetor[i];
    }
    for(int f=0; f < 10;f++)
    {
        printf("%d \n", inversa[f]);
    }
    return 0;
}