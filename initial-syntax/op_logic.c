#include <stdio.h>
#include <stdlib.h>

int main(){

    //operadores lógicos
    //&& Operador "E" = as duas expressões TEM que ser verdadeira
    //|| Operador "OU" =  uma das expressões TEM que ser verdadeira
    // ! Operador de NEGAÇÃO = nega o valor estipulado for 0 vale 1 e se 1 for vale 0

    //TABELA VERDADE
    // A B      !A !B       A&&B        A||B
    // 0 0       1  1        0           0
    // 0 1       1  0        0           1
    // 1 0       0  1        0           1
    // 1 1       0  0        1           1
    printf("---------Operador 'E'---------\n");
    int r, x = 5, y = 3;
    r = (x > 2) && (y < x);
    printf("Resultado = %d\n", r);

    r = (x%2 == 0) && (y > 0);
    printf("Resultado = %d\n", r);


    printf("---------Operador 'OU'---------\n");
    r = (x > 2) || (y < x);
    printf("Resultado = %d\n", r);

    r = (x%2 == 1) || (y > 0);
    printf("Resultado = %d\n", r);

    printf("---------Operador 'NEGAÇÃO'---------\n");
    // forma geral -> !(expressão)
    r = !(x > 2);
    printf("Resultado = %d\n", r);
    r = !((x>7) && (x>y));
    printf("Resultado = %d\n", r);


    getchar();
    return 0;
}
