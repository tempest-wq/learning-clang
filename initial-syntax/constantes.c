#include <stdio.h>
#define PI 3.1415 //Outra forma que declarar uma constante, porém, pode ser substituido.
//Quero utilizar um valor em um programa e não será modificado, constante
int main(){
    const int numero = 10; //Tenho que obrigatoriamente inicializar a variavel com um valor

    float f = PI + 1;
    printf("PI = %f \n", f);

    getchar();
    return 0;
}
