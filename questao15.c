/*Construir um programa que apresente como resultado a fatorial dos valores ímpares
situados na faixa numérica de 1 até 10*/

#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    printf("Fatorial dos valores impares de 1 a 10:\n");
    for (int i = 1; i <= 10; i += 2) {
        printf("Fatorial de %d e %d\n", i, fatorial(i));
    }
    return 0;
}
