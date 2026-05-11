/*Elaborar um programa que apresente todos os valores numéricos inteiros ímpares
situados na faixa de 0 a 20. Sugestão: para verificar se o valor numérico é ímpar,
faça a verificação dentro do laço.*/

#include <stdio.h>

int main() {
    int i;
    printf("Numeros inteiros impares de 0 a 20:\n");
    for (i = 0; i <= 20; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}