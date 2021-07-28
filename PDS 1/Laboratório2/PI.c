#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main(){

    /*
    double valor,pi,m;
    double a = 4;
    int i = 0;
    m= 6;
    pi = 0;
    scanf("%lf", &valor);
    
    while(valor < m){
        
        pi = pi + (pow(-1,i))/(2*i + 1);
        m = abs((double) M_PI - (4 * (double)pi));
        i += 1;
        printf("%lf pi  %lf  Mpi  %i i  diferenca %lf \n", pi,M_PI,i,valor);
        
        }
    */
        int i=1;
        double pi=0, aux1=1;
        double valor;
        scanf("%lf", &valor);
        for(i=1;valor < fabs((double)pi - (double) M_PI); i++){
            if(i%2!=0)
                pi=pi+4/aux1;
            else
                pi=pi-4/aux1;
                aux1=aux1+2;
        }
        printf("%i",i);
        printf("\n\n%.10f\n\n",pi);

    return 0;
}