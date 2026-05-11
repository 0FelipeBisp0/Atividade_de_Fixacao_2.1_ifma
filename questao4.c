/*Elaborar um programa que apresente o somatório dos valores pares existentes na
faixa de 1 até 500*/

#include <stdio.h> 

int main() {
    int i, soma = 0;
    for (i = 1; i <= 500; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    printf("A soma dos valores pares de 1 a 500 é: %d\n", soma);
    return 0;
}