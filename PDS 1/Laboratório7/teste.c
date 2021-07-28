#include <stdio.h>
#include <stdlib.h>


void escrever()
{
    FILE *arq;
    char string[100];
    int i,f;
    arq = fopen("arquivo.txt","w");
    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    printf("Entre com a string a ser gravada no arquivo \n");
    gets(string);
    for(i=0;i<strlen(string);i++)
    {
        fputc(string[i],arq);
    }
    for(f=0;f<strlen(string);f++)
    {
        char c = fgetc(arq);
        printf("%c",c);
    }
    fclose(arq);
}

void ler(){
        FILE *arq;
    int i;
    arq = fopen("arquivo.txt","r");
    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    for(i=0;i<100;i++)
    {
        char c = fgetc(arq);
        printf("%c",c);
    }
    fclose(arq);
}

void lerTodos()
{

    FILE *arq;
    char c;
    arq = fopen("arquivo.txt","r");
    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }
    while((c=fgetc(arq)) != EOF)
    {
        printf("%c",c);
    }
    fclose(arq);
}

void LerComFEOF()
{
    int i, n;
    FILE *F = fopen("arquivo.txt","r");
    if(F == NULL)
    {
        printf(printf("Erro na abertura"));
        system("pause");
        exit(1);
    }
    while(1)
    {
        fscanf(F,"%d",&n);
        if(feof(F))
        {
            break;
            printf("%d ",n);
        }
    }
    fclose(F);
}

void EscreverBlocos()
{
    FILE *arq;
    arq = fopen("arquivo.txt","wb");

    char str[20] = "Hello World";
    float x = 5;
    int v[5] = {1,2,3,4,5};
    //grava a string toda no arquivo
    fwrite(str,sizeof(char),strlen(str),arq);
    //grava apenas os 5 primeiros caracteres da string
    fwrite(str,sizeof(char),5,arq);
    //grava o valor de x no arquivo
    fwrite(&x,sizeof(float),1,arq);
    //grava todo o array no arquivo
    fwrite(v,sizeof(int),5,arq);
    //grava apenas as 2 primeiras posições do array
    fwrite(v,sizeof(int),2,arq);
    fclose(arq);
}

void LerFread()
{
    char str1[20],str2[20];
    float x;
    int i,v1[5],v2[2];

    FILE *arq = fopen("arquivo.txt","wb");
    //Lê a string toda do arquivo
    fread(str1,sizeof(char),12,arq);
    str1[12] = '\0';
    printf("%s\n",str1);
    //le apenas os 5 primeiros caracteres da string
    fread(str2,sizeof(char),5,arq);
    str2[5] = '\0';
    printf("%s\n",str2);
    //le o valor de x do arquivo
    fread(&x,sizeof(float),1,arq);
    printf("%f\n",x);
    //le todo o array do arquivo 5 posições
    fread(v1,sizeof(int),5,arq);
    for(i=0;i<5;i++)
    {
        printf("v1{%d}  = %d\n",i,v1[i]);
    }
    //le apenas as 2 primeiras posições do array
    fread(v2,sizeof(int),2,arq);
    for(i=0;i<2;i++)
    {
        printf("v2{%d} = %d \n",i,v2[i]);
    }
    fclose(arq);
}

void lerPorScanf(){
    char nome[50];
    char texto[100];
    FILE *arq = fopen("arquivo.txt","w");
    fprintf(arq,"Nome : %s\n",nome);
    fprintf(arq,"Texto : %s\n",texto);

    fscanf(arq,"%s%s",texto,nome);
    printf("%s",texto);
    printf("%s",nome);
    fclose(arq);

}

int main()
{
    escrever();
    ler();
    lerTodos();
    //LerComFEOF();
    //EscreverBlocos();
    //LerFread();
    lerPorScanf();
    return 0;
}