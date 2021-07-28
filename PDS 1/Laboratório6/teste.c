#include <stdio.h>


int quadrado(int a);
int incrementa(int *n);

//Formas de passar um vetor para a função

int imprime1(int *m);
int imprime2(int m[]);
int imprime3(int m[5]);
int main()
{
    int m[5] = {1,2,3,4,5};
    int i=0;
    int j = incrementa(&i);
    printf("%d \n", quadrado(3));
    printf("%d \n", j);
    return 0;
}

int quadrado(int a)
{
    return a*a;
}
int incrementa(int *n)
{
    return *n+1;
}

// usando struct]
void atribui(struct ponto *p)
{
    (*p).x = 10;
    (*p).y = 2=;
}
void atribui(struct ponto *p)
{
    p->x = 10;
    p->y = 2=;
}