/*Elaborar um programa que apresente os resultados das potências do valor de base
3, elevado a um expoente que varie do valor 0 até o valor 15. O programa deve
apresentar os valores 1, 3, 9, 27, … 14.348.907. Obrigatório utilizar a variável do
laço para resolver o problema.*/

#include <stdio.h>

int main() {
    int val=1, i;

    for (i = 0; i < 15; i++)
    {
        val *=3;
        printf("%d/", val);

    }
    return 0;
}
