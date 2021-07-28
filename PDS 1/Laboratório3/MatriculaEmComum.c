#include <stdio.h>
#include <stdlib.h>

int main() 
{   
    int mA, mC;
    scanf("%d", &mA);
    int AEDS[mA];
    for(int i=0;i < mA;i++)
    {
        scanf("%d", &AEDS[i]);
    }
    scanf("%d", &mC);
    int Calculo[mC];
    for(int f=0;f < mC;f++)
    {
        scanf("%d", &Calculo[f]);
    }
    for(int m=0;m < mA;m++)
    {
        for(int k=0;k < mC;k++)
        {
            if(AEDS[m] == Calculo[k]){
                printf("%d \n", AEDS[m]);
            }
        }
    } 
    return 0;
}