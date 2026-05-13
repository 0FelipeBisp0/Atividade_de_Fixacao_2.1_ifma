/*Elaborar um programa que leia dez valores numéricos reais e apresente no final o
somatório e a média dos valores lidos.*/

#include <stdio.h>
int main() {
    float valores[10], somatorio = 0.0, media;
    printf("Digite 10 valores reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &valores[i]);
        somatorio += valores[i];
    }
    media = somatorio / 10;
    printf("O somatório dos valores lidos é: %.2f\n", somatorio);
    printf("A média dos valores lidos é: %.2f\n", media);
    return 0;
}

