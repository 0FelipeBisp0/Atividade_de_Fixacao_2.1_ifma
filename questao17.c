/* Escrever um programa que possibilite calcular a área total em metros de uma
residência com os cômodos sala, cozinha, banheiro, dois quartos, área de serviço,
quintal, garagem, entre outros que podem ser fornecidos ao programa. O programa
deve solicitar a entrada do nome, da largura e do comprimento de determinado
cômodo. Em seguida, deve apresentar a área do cômodo lido e também uma
mensagem solicitando ao usuário a confirmação de continuar calculando novos
cômodos. Caso o usuário responda “NÃO”, o programa deve apresentar o valor total
acumulado da área residencial.*/


#include <stdio.h>
#include <string.h>
int main() {
    char nome[50];
    float largura, comprimento, area, area_total = 0.0;
    char resposta[10];

    do {
        printf("Digite o nome do comodo: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';

        printf("Digite a largura do comodo em metros: ");
        scanf("%f", &largura);

        printf("Digite o comprimento do comodo em metros: ");
        scanf("%f", &comprimento);

        area = largura * comprimento;
        area_total += area;

        printf("A area do %s e: %.2f metros quadrados\n", nome, area);

        printf("Deseja continuar calculando novos comodos? (SIM/NAO): ");
        scanf("%s", resposta);
        getchar(); 
    } while (strcmp(resposta, "NAO") != 0);

    printf("A area total acumulada da residencia e: %.2f metros quadrados\n", area_total);
    return 0;
}
