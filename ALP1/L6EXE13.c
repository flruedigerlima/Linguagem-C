/* * Projeto: Tabuada Interativa (Exercício 13 - Lista 6)
 * Disciplina: Algoritmos e Lógica de Programação Estruturada 1 - IFSP Bauru
 * Desempenho: Nota 8,70 / Frequência 95%
 * Descrição: Algoritmo que gera tabuadas dinâmicas conforme a escolha do usuário, 
 * com validação de continuidade (S/N).
 */

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
 {
char op;
int t, i;
do
{
 printf("\n");
 printf("Digite a tabuada Desejada ");
 scanf("%d", &t);
 printf("\n");
 for (i =1; i < 11; i++)
 {
 printf("%3d x %3d = %3d ",t, i, t*i);
 printf("\n");
 }
 do
 {
printf("\n\n\n");
printf("Deseja Outra Tabuada ( s ou n ) \n\n");
op=getch(); /* PEGA O CARACTER SEM MOSTRAR*/
op=toupper(op); /*CONVERTE P MAIUSCULO*/
 }while(op != 'S' && op != 'N'); /*TESTA COM AND */
}while(op != 'N');
 }
