/*Escrever um programa que apresente como resultado a potência de uma base
qualquer elevada a um expoente qualquer, ou seja, de B^E, em que B é o valor da
base e E o valor do expoente. Considere apenas a entrada de valores inteiros
positivos, ou seja, de valores naturais. Não utilizar o cálculo direto, mas sim o laço
para multiplicar a base cada uma das E vezes.*/


#include <stdio.h>
#include <string.h>

int main (){

    int base, expo;
    char input[10];
    while (1)
    {    
        printf("Digite os números da base e do expoente respectivamente ou 'sair' para encerrar o programa: ");
        scanf("%s", input);

        if (strcmp(input, "sair") == 0)
        {
            break;
        }
        sscanf(input, "%d", &base);
        scanf("%d", &expo);
        for (int i = 1; i < expo; i++)
        {
            base *= expo;
            printf("%d/\n", base);
        }
        
    }

}