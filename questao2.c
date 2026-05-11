/*Elaborar um programa que mostre os resultados da tabuada de um número
qualquer, a qual deve ser apresentada de acordo com sua forma tradicional.*/

#include <stdio.h>
int main() {
    int num, i;
    printf("Digite um numero para mostrar a tabuada: ");
    scanf("%d", &num);
    printf("Tabuada de %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
