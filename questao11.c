/*Escrever um programa que calcule e apresente o somatório do número de grãos de
trigo que se pode obter num tabuleiro de xadrez, obedecendo à seguinte regra:
colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do
quadro anterior. Ou seja, no primeiro quadro coloca-se um grão, no segundo quadro
colocam-se dois grãos (neste momento tem-se três grãos), no terceiro quadro
colocam-se quatro grãos (tendo neste momento sete grãos), no quarto quadro
colocam-se oito grãos (tendo-se então 15 grãos) até atingir o sexagésimo quarto
quadro. Este exercício foi baseado numa situação exposta no capítulo 16 do livro “O
Homem que Calculava” de Malba Tahan, da Editora Record.
*/


#include <stdio.h>
int main() {
    unsigned long long graos = 1, total = 1;
    for (int i = 2; i <= 64; i++) {
        graos *= 2;
        total += graos;
    }
    printf("O total de grãos de trigo no tabuleiro é: %llu\n", total);
    return 0;
}