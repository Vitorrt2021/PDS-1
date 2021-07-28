#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int cont=0;
    int ss =0;
    fgets (str1, 60,stdin);
    fgets (str2, 60,stdin);
    int tam1 = strlen(str1);
    int tam2= strlen(str2);
    for(int i=0;i<tam1;i++)
    {
        if(str1[i] = str2[0]){
            for(int s=0;s<tam2;s++){
                if(str1[i+s] == str2[s])
                {
                    cont+=1;
                    if(cont == tam2)
                    {
                        printf("È substring");
                        ss = 1;
                    }
                }
                

            }
            cont=0;
        }
    }
    if(ss == 0){
        printf("Não é substring");
    }
    
    return 0;
}