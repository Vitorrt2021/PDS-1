#include <stdio.h>
#include <stdlib.h>

long int verPrimo(long int n)
{
    if(n<2){
        return -1;
    }
    else
    {
        long int k = sqrt(n);
        long int i=2;
        for(i;i<k+1;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    
}

int main()
{
    long int n;
    while(scanf("%ld",&n) != EOF){
        printf("%ld \n", verPrimo(n));
    }

    return 0;
}