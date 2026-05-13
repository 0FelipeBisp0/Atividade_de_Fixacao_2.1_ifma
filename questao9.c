/*Escrever um programa que apresente os valores da sequência numérica de
Fibonacci até o décimo quinto termo. A sequência de Fibonacci segue a regra de
que cada número é a soma dos dois anteriores, com exceção dos dois primeiros que
são 1 por padrão. Use as variáveis ATUAL, ANTERIOR e PRÓXIMO.*/

#include <stdio.h>
int main() {
    int atual = 1, anterior = 1, proximo;
    printf("Sequencia de Fibonacci ate o decimo quinto termo:\n");
    printf("%d ", anterior);
    printf("%d ", atual);
    for (int i = 3; i <= 15; i++) {
        proximo = atual + anterior;
        printf("%d ", proximo);
        anterior = atual;
        atual = proximo;
        }
    printf("\n");
    return 0;
}