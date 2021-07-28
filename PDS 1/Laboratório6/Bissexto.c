#include <stdio.h>

int bis(int n)
{
    if((n%4==0) && (n%100!=0)||((n%100==0)&&(n%400==0)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    
    int n;
    while(scanf("%d",&n) != EOF){
        printf("%d \n",bis(n));
    }
    return 0;
}