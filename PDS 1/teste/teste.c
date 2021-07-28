#include <stdio.h>
#include <stdlib.h>

int main(){
   int i=2, x=0;
   printf("i = {");
   do{
       if(!(i%15))
       {
           x++;
           printf("%d",x);
       }
       ++i;
   }while(i<50);
   printf("\b}\n");
    return 0;
}