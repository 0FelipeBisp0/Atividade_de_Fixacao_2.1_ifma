/*Elaborar um programa que leia quinze valores numéricos inteiros e no final
apresente o somatório da fatorial de cada valor lido.*/

#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}


int main() {
    int valores[15];
    long long somatorio = 0;

    printf("Digite 15 valores inteiros:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 15; i++) {
        somatorio += fatorial(valores[i]);
    }
    
    printf("O somatorio da fatorial de cada valor lido e: %lld\n", somatorio);
    return 0;
}
