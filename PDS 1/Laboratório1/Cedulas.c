#include <stdio.h>
#include <stdlib.h>

int main(){
    int notas ;
    int rest,n100,n50,n20,n10,n5,n2,n1 ;
    scanf("%i", &notas);
    n100 = notas / 100 ;
    printf("100: %i \n", n100); 
    rest = notas % 100;
    n50 = rest / 50;
    printf("50: %i \n", n50);
    rest = rest % 50;
    n20 = rest /20;
    printf("20: %i \n", n20);
    rest = rest % 20;
    n10 = rest /10;
    printf("10: %i \n", n10);
    rest = rest % 10;
    n5 = rest/5;
    printf("5: %i \n", n5);
    rest = rest % 5;
    n2 = rest / 2;
    printf("2: %i \n", n2);
    rest = rest % 2;
    n1 = rest/1;
    printf("1: %i \n", n1);
    rest = rest%1;
    return 0;
}