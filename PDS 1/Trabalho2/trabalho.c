#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{
    // 1 Nome do arquivo
    // 2 Numero da função
    // 3 nome do arquivo de saida
/*
1. Exportar Lista de Funcion´arios:
O programa deve gerar um arquivo TXT, com o nome passado pelo param3, salvo no
mesmo diret´orio de execu¸c˜ao, com a lista de todos os funcion´arios, EM ORDEM
ALFABETICA ´ , com os mesmos dados da entrada, um dado por linha (Nome,
Sal´ario, Data de Admiss˜ao e Departamento).
2. Listar Funcion´arios por Departamento
O programa dever´a imprimir na sa´ıda padr˜ao (tela) a lista dos funcion´arios do setor
passado no param3, EM ORDEM ALFABETICA ´ , com todos os dados de cada
funcion´ario, um dado por linha (Nome, Sal´ario, Data de Admiss˜ao e Departamento).
3. Encontrar Funcion´ario Mais Antigo
O programa dever´a imprimir na sa´ıda padr˜ao (tela) todos os dados do funcion´ario
mais antigo (com a data de admiss˜ao mais antiga da lista), um dado por linha (Nome,
Sal´ario, Data de Admiss˜ao e Departamento).
4. Encontrar Funcion´ario Mais Antigo do Departamento
O programa dever´a imprimir na sa´ıda padr˜ao (tela) todos os dados do funcion´ario
mais antigo pertencente ao departamento passado no param3 (com a data de admiss˜ao mais antiga do departamento), um dado por linha (Nome, Sal´ario, Data de
Admiss˜ao e Departamento).
5. Calcular M´edia Salarial
O programa dever´a imprimir na sa´ıda padr˜ao (tela) apenas o valor da m´edia salarial
de todos os funcion´arios da lista.
Ex.: 3455.22
6. Calcular M´edia Salarial por Departamento
O programa dever´a imprimir na sa´ıda padr˜ao (tela) apenas o valor da m´edia salarial
de todos os funcion´arios pertencente ao departamento passado no param3
Ex.: 4500.50
*/
    FILE *arquivo;
    fopen(argv[0],"rt");
    if(arquivo == NULL)
    {
        printf("Não foi possivel abrir aquivo");
        exit(0);
    }
    fclose(arquivo);

    struct Funcionarios
    {
        char nome[100];
        int salario;
        int admissão;
        char departamento[100];
    };

    return 0;
}