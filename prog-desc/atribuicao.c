#include <stdio.h>

int main(){
//Atribuição multipla
    int x, y, z;
    x = y = z = 10;

//Atribuição de tipos diferentes char = int, int = char TABELA ASCI -128 a 127
    int n = 97;
    char ch1, ch2 = 'A';
    ch1 = n;
    printf("ch1 = %c \n", ch1);
    n = ch2;
    printf("x = %d \n", n);

//Atribuição de tipos diferente float = int, int = float
// Números inteiros estão dentro do números reais, então a converção pode ser feita
// Já de float para inteiro, o número depois da virgula é perdido.

// Atribuição de tipos diferentes char = float, float = char, mesma coisa que inteiro

    getchar();
    return 0;
}
