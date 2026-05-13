/* Elaborar um programa que apresente os valores de conversão de graus Celsius em
graus Fahrenheit, de dez em dez graus, iniciando a contagem em dez graus Celsius
e finalizando em 100 graus Celsius. O programa deve apresentar os valores das
duas temperaturas.*/

#include <stdio.h>
int main() {
    int celsius, fahrenheit;
    printf("Celsius\tFahrenheit\n");
    for (celsius = 10; celsius <= 100; celsius += 10) {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%d\t%d\n", celsius, fahrenheit);
    }
    return 0;
}




