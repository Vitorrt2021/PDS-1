#include <stdio.h>
#include <stdlib.h>

int main(){
    int d,j;
    j = 0;
    scanf("%i", &d);
    for(int i=0; i < d+1; i++){
       j += i; 
    }
    printf("%i", j);
    return 0;
}