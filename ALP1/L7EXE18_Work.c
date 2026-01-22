/* Projeto: Calculadora Simples com Switch Case (Exercício 18 - Lista 7)
 * Disciplina: Algoritmos e Lógica de Programação Estruturada 1 - IFSP Bauru
 * Descrição: Implementação de calculadora funcional utilizando estrutura Switch Case 
 * e loop de repetição Do-While para múltiplos cálculos.
 */

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main() {
    float num1, num2, resultado;
    int opcao;
    char continuar;

    do {
        printf("\n\t\t ** menu calculadora ** \n\n");
        printf("\t 1 - para Soma (+)\n");
        printf("\t 2 - para Subtração (-)\n");
        printf("\t 3 - para Divisao (/)\n");
        printf("\t 4 - para Multiplicacao (*)\n");
        printf("\t escolha uma opcao: ");
        scanf("%d", &opcao);


        printf("Digite o seu primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o seu segundo número: ");
        scanf("%f", &num2);

        switch (opcao) {
            case 1:
                printf("\n\n\t Voce digitou para somar %2.f \n\n",num1+num2);
                break;
            case 2:
                printf("\n\n\t Voce digitou para subtrair %2.f \n\n",num1-num2);
                break;
            case 3:
                printf("\n\n\t Voce digitou para dividir %2.f \n\n",num1/num2);
                break;
            case 4:
                printf("\n\n\t Voce digitou para multiplicar %2.f \n\n",num1*num2);
                break;
        }
         do
              {
          printf("\n\n\n");
          printf("Deseja outro calculo Sim ou Não \n\n");
          continuar=getch();
          continuar=toupper(continuar);

               }while(continuar != 'S'  && continuar != 'N');

          }while(continuar != 'N');

}
