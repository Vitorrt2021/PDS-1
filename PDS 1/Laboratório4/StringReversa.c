#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    fgets (str1, 60,stdin);
    int tam = strlen(str1);
    for(int i=0;i<tam;i++){
        str2[i] = str1[tam-i-1];
    }
    printf("%s", str2);
    return 0;
}