#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    char str[100];
    char c1;
    char c2;
    int cont =0;
    fgets (str, 60,stdin);
    scanf("%c  \n", &c1);
    scanf("%c", &c2);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] == c1 && (cont == 0)){
            str[i] = c2;
            cont+=1;
        }
    }
    printf("%s", str);
    
    return 0;
}
