#include <stdio.h>
#include <stdlib.h>

int main(){
    int sim = 1;
    while(sim == 1){
        int n;
        scanf("%d",&n);
        if((n < 0) || (n > 800))
        {
            break;
        }
        int y[801] = {0,1,1};
        
        switch (n)
        {
        case 0:
            printf("%d \n",y[0]);
            break;
            
        case 1:
            printf("%d \n",y[1]);
            break;
            
        case 2:
            printf("%d \n",y[2]);
            break;
        
        default:
            for(int i=3; i <= n;i++)
            {
                y[i] = y[i-1] + y[i-2];
            }
            printf("%d \n",y[n]);
        
            break;
        }
        
    }
    return 0;
}