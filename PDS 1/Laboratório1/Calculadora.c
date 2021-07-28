#include <stdio.h>
#include <stdlib.h>

int Soma(a,b){
    return a + b;
}
int Subtracao(a,b){
    return a - b;
}
int Multiplicacao(a,b){
    return a * b;
}
int Divisao(a,b){
    float c ;
    c = a/b;
    return c;
}
int Fatorial(a){
    int fa, i;
    i = 1;
    fa = 1;
    while (i != a + 1){
        fa = fa * i;
        i += 1;
    }
    return fa;
}
int main()
{
    int a, b;
    a = 4;
    b = 34;
    printf("%i \n",Soma(a,b));
    printf("%i \n",Subtracao(a,b));
    printf("%i \n",Multiplicacao(a,b));
    printf("%d \n",Divisao(a,b));
    printf("%i \n", Fatorial(a));
    
    return 0;
}