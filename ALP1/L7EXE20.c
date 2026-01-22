/* * Projeto: Classificação de Classe Eleitoral (Exercício 20 - Lista 7)
 * Disciplina: Algoritmos e Lógica de Programação Estruturada 1 - IFSP Bauru
 * Desempenho: Nota 8,70 / Frequência 95%
 * Descrição: Algoritmo que determina a classe eleitoral com base na idade, 
 * utilizando estruturas condicionais encadeadas e lógica de repetição.
 */

#include <stdio.h>

int main() {
    int idade;
    char continuar;

    do {
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        if (idade < 16) {
            printf("Classe eleitoral: Não-eleitor (abaixo de 16 anos)\n");
        } else if (idade >= 18 && idade <= 65) {
            printf("Classe eleitoral: Eleitor obrigatório (entre 18 e 65 anos)\n");
        } else {
            printf("Classe eleitoral: Eleitor facultativo (entre 16 e 18 e maior de 65 anos)\n");
        }

        printf("\nDeseja realizar outro cálculo? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("\nPrograma encerrado.\n");

    return 0;
}
