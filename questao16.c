/*Elaborar um programa que apresente os resultados da soma e da média aritmética
dos valores pares situados na faixa numérica de 50 até 70.*/

#include <stdio.h>
int main() {
    int soma = 0, cont = 0;
    for (int i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            soma += i;
            cont++;
        }
    }
    if (cont > 0) {
        printf("A soma dos valores pares de 50 a 70 e: %d\n", soma);
        printf("A media aritmetica dos valores pares de 50 a 70 e: %.2f\n", (float)soma / cont);
    } else {
        printf("Nao foram encontrados valores pares na faixa de 50 a 70.\n");
    }
    return 0;
}