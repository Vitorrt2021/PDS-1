#include <stdlib.h>
#include <stdio.h>


int main()
{

    /*
    char total[120];
    int i,f;
    for(f=0;f<argc;f++)
    {
        for(i=0;i<strlen(argv[f]);i++)
        {
            if(f==0)
            {
                total[i] = argv[0][i];
            }
            else{
                total[strlen(argv[f-1])] = argv[f][i];

            }
        }
    }
    */
    char argv[20] = "arquivo71.txt";
    FILE *arq;
    char c;
    int cont=0;
    arq = fopen(argv[0],"r");
    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    while((c=fgetc(arq)) != EOF)
    {
        if(c == 'a')
        {
            cont +=1;
        }
    }
    fclose(arq);
    printf("%d \n",cont);
    return 0;
}