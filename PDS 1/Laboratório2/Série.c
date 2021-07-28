#include <stdio.h>
#include <stdlib.h>



int main(){
    int n,x0,x1;
    scanf("%i",&n);
    scanf("%i",&x0);
    scanf("%i",&x1);
    for(int i = 0;i != n+1;i++ ){
        int f ;
        if(i == 0 ){
            printf("X%i: %i \n", i,x0);
        }
        else if(i == 1 ){
            printf("X%i: %i \n", i,x1);
        }
        else{
            
            f = 4*x1 - 2*x0;
            printf("X%i: %i \n", i,f);
            x0 = x1;
            x1 = f;
        }        
        

    }
    return 0;
}