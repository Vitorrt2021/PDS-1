#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define true 1
#define false 0
int main()
{
    int min,max;
    scanf("%d",&min);
    scanf("%d",&max);
    for(int i =min;i != max+1; i++)
    {
        int s = 2;
        bool primo = true ;
        while((primo) && (s * s <= i)  )
        {
            if(i % s == 0)
            {
                primo = false;
                

            }
            s+=1;
        }
        if(primo != false)
        {
            printf("%d \n",i);
        }
            
        
    }
}