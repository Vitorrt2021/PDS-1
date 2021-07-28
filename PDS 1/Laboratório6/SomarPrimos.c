#include <stdio.h>

int verPrimo(int n)
{
    if(n<2){
        return -1;
    }
    else
    {
        int k = sqrt(n);
        for(int i=2;i<k+1;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    
}

long int somarPrimo(int at)
{
    int j=0;
    int primos=0;
    long int sum=0;
    while(primos<at)
    {
       
        if(verPrimo(j) == 1){
            sum +=j;
            primos++;
            j++;
            
        }
        else{
            j++;
        }
    }
    return sum;
}
int main()
{
    
    int n;
    while(scanf("%d",&n) != EOF){
        printf("%ld \n",somarPrimo(n));
    }
    return 0;
}