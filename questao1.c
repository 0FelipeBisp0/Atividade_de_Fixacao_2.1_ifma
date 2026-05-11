/*Elaborar um programa que apresente os quadrados dos números inteiros existentes
na faixa de valores de 15 a 200.*/

#include <stdio.h>

int main() {
    int i;
    printf("Quadrados dos numeros inteiros de 15 a 200:\n");
    for (i = 15; i <= 200; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    return 0;
}