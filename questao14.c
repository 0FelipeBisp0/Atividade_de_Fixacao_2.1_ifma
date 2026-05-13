/*Elaborar um programa que leia sucessivamente valores numéricos e apresente no
final o somatório, a média e o total de valores lidos. O programa deve ler os valores
enquanto o usuário estiver fornecendo valores positivos. Ou seja, o programa deve
parar quando o usuário fornecer um valor negativo. */

#include <stdio.h>
int main() {
    float valor, somatorio = 0.0, media;
    int cont = 0;

    printf("Digite valores positivos (digite um valor negativo para encerrar):\n");
    while (1) {
        scanf("%f", &valor);
        if (valor < 0) {
            break;
        }
        somatorio += valor;
        cont++;
    }

    if (cont > 0) {
        media = somatorio / cont;
        printf("O somatório dos valores lidos é: %.2f\n", somatorio);
        printf("A média dos valores lidos é: %.2f\n", media);
        printf("O total de valores lidos é: %d\n", cont);
    } else {
        printf("Nenhum valor positivo foi fornecido.\n");
    }
}