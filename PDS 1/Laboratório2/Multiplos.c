#include <stdio.h>
#include <stdlib.h>

int main(){
    int todos,multiplo,i,dois,tres,cinco;
    dois = 0;
    tres = 0;
    cinco = 0;
    todos = 0;
    i = 1;
    scanf("%i", &multiplo);
    while(i < multiplo + 1){
        if(i%2 == 0){
            dois ++;
        }
        if(i%3 == 0){
            tres ++;
        }
        if(i%5 == 0){
            cinco ++;
        }
        if((i%5 == 0) && (i%3 == 0) && (i%2 == 0)){
            todos ++;
        }
        i++;
    }
    printf("Múltiplos de 2: %i \n" , dois);
    printf("Múltiplos de 3: %i \n" , tres);
    printf("Múltiplos de 5: %i \n" , cinco);
    printf("Múltiplos de todos: %i \n" , todos);
    return 0;
}