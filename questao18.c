/*Elaborar um programa que leia valores positivos inteiros até que um valor negativo
seja informado. Ao final devem ser apresentados o maior e o menor valores
informados pelo usuário.*/

#include <stdio.h>
int main() {
    int valor, maior = 0, menor = 0;
    printf("Digite valores positivos inteiros (digite um valor negativo para encerrar):\n");
    while (1) {
        scanf("%d", &valor);
        if (valor < 0) {
            break;
        }
        if (maior == 0 || valor > maior) {
            maior = valor;
        }
        if (menor == 0 || valor < menor) {
            menor = valor;
        }
    }
    if (maior > 0 && menor > 0) {
        printf("O maior valor informado é: %d\n", maior);
        printf("O menor valor informado é: %d\n", menor);
    } else {
        printf("Nenhum valor positivo foi informado.\n");
    }
    return 0;
}