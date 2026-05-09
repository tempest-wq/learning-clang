#include <stdio.h>

 /*   int main(void)
    {
        printf("Bem-vindo\na\nC!\n");
        return 0;
    }
*/

 int main(void)
 {
     int inteiro1, inteiro2, soma;

     printf("Digite o primeiro número inteiro\n");
     scanf("%d", &inteiro1);

     printf("Digite o segundo número inteiro\n");
     scanf("%d", &inteiro2);

     soma = inteiro1 + inteiro2;

     printf("Soma é de %d\n", soma);
     return 0;

 }
