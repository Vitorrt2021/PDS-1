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
    int m;
    m = matriz[0][0];
    for(int i=0;i < l;i++)
    {
        for(int h=0; h < c; h++)
        {
            if(matriz[i][h] > m)
            {
                m = matriz[i][h];
            }
        }
    }
    printf("%d", m);
    
    return 0;
}