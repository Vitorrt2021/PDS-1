#include <stdio.h>

int bis(int ano)
{
    int cont=0;
    for(int n=ano;n<2020;n++){
        if((n%4==0) && (n%100!=0)||((n%100==0)&&(n%400==0)))
        {
            cont++;
        }
    }
    return cont;
}

int contarMes(int mes)
{
    int diasP=0;
    if(mes == 2){
        diasP += 31;
    }
    if(mes == 3){
        diasP+= 59;
    }
    if(mes == 4){
        diasP+=90;
    }
    if(mes == 5){
        diasP+=120;
    }
    if(mes == 6){
        diasP =151;
    }
    if(mes == 7){
        diasP+=181;
    }
    if(mes == 8){
        diasP+=212;
    }
    if(mes == 9){
        diasP+=243;
    }
    if(mes == 10){
        diasP+=273;
    }
    if(mes == 11){
        diasP+=304;
    }
    if(mes == 12){
        diasP+= 334;
    }
    return diasP;
}
int contarDias(int dia,int mes,int ano)
{
    
    int diasP;
    int doAno = 365-(contarMes(mes)+dia);
    printf("%d dia\n",dia);
    printf("%d mes\n",mes);
    printf("%d ano\n",ano);
    printf("%d \n",doAno);

    int doFim = 260;

    int Entre = 365*(2020-1-ano) ;
    if(ano >= 2019){
        Entre =0;
    }
    if(ano == 2020){
        doFim= 260-(contarMes(mes)+dia);
    }
    printf("%d \n",doFim);
    printf("%d \n", Entre);
    int bs = bis(ano);
    diasP = doAno+doFim+Entre+bs+2;
    if(ano == 2020){
        doFim= 260-(contarMes(mes)+dia);
        diasP = doFim;
    }
    return diasP;
}

int main(){
    
    
    int dia,mes,ano;
    while(scanf("%d",&dia) != EOF){
    scanf("%d",&mes);
    scanf("%d",&ano);
    printf("%d  %d  %d \n",dia,mes,ano);
    printf("%d \n", contarDias(dia,mes,ano));
    }
    return 0;
}