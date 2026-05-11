/*Construir um programa que apresente todos os valores numéricos divisíveis por 4 e
menores que 200. Sugestão: a variável que controla o contador do laço de repetição
deve ser iniciada com 1.*/

#include <stdio.h>
int main() {
    int i;
    printf("Valores numericos divisiveis por 4 e menores que 200:\n");
    for (i = 1; i < 200; i++) {
        if (i % 4 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}