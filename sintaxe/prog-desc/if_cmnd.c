#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Comando if: permite executar ou não um conjunto de comandos de acordo com
     * uma condição
     */
    //forma geral:
    // if (condição){
    //     conjunto de comandos
    // }
    int x;

    printf("Digite um número:");
    scanf("%d", &x);

    if ((x%2 == 0) || (x<0)){
        printf("O valor é par ou negativo\n");
    }

    //caso tenha somente 1 comando para ser executado, não precisa de
    //chaves
    if ((x%2 == 0) || (x<0))
        printf("O valor é par ou negativo\n");




    printf("Fim do programa\n");
    getchar();
    return 0;
}
