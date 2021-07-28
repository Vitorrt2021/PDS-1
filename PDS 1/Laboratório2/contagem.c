#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 233;
    do{

        printf("%i \n",i);
        i += 5;
    }while(i < 300);
    do{
        printf("%i \n",i);
        i += 3;
    }while(i < 400 );
    do{

        printf("%i \n",i);
        i += 5;
    }while(i <= 457);

    return 0;
}