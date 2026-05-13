/* Elaborar um programa que apresente o resultado inteiro da divisão de dois números
quaisquer, representando o dividendo e o divisor da divisão a ser processada.
Sugestão: para a elaboração do programa, não utilize o operador aritmético de
divisão com quociente inteiro DIV. Use uma solução baseada em laço de repetição.
O programa deve apresentar como resultado (quociente) quantas vezes o divisor
cabe no dividendo.*/


#include <stdio.h>
int main() {
    int dividendo, divisor, quociente = 0;
    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Erro: Divisao por zero nao e permitida.\n");
        return 1;
    }

    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }

    printf("O resultado inteiro da divisao e: %d\n", quociente);
    return 0;
}