#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    scanf("%f", &a);
    a = (a * 1.8)+32;
    printf("%.0f ", a);
    
    return 0;
}