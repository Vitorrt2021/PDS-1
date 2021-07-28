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
        long int x1,x2,y;
            x1 = 1;
            x2=0;
            y =0;
        for(int i=0; i != n;i++)
        {
            
            y = x2 + x1;
            x1 = x2;
            x2 = y;
        }
        printf("%li \n",y);
        
    }
    return 0;
}