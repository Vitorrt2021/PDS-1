#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,c;
    scanf("%d",&l);
    scanf("%d",&c);
    int matriz[l][c];
      for(int i=0;i < l;i++)
    {
        for(int h=0; h < c; h++)
        {
            scanf("%d ", &matriz[i][h]);
        }
    }
      for(int i=0;i < l;i++)
    {
        for(int h=0; h < c; h++)
        {
            printf("%d ", -1*matriz[i][h]);
            
        }
        printf("\n");
    }



    return 0;
}