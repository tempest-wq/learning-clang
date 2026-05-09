//Printf e Scanf
#include <stdio.h>

int main(){
    char letra = 'T';
    int numero;
    float n;
    double d;

    printf("%c\n", letra);
    printf("Digite uma única letra: ");
    scanf("%c", &letra); //Primeiro lê, depois armazena
    printf("%c\n", letra);

    getchar();
    return 0;
}
