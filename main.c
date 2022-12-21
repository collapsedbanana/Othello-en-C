#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>


int main() {
  char P1[25], P2[25];
  char l1,l2,l3,l4,l5,l6,l7,l8,l9;
  int posP1, posP2, b, op, opcor, opinstrucoes, contador, cp1, verificar = 0, totalganhos = 0, totalempates = 0, opstatus, opjogo;
  l1 = ' ';l2 = ' ';l3 = ' ';l4 = ' ';l5 = ' ';l6 = ' ';l7 = ' ';l8 = ' ';l9 = ' ';

//TEMPO
  struct tm *data_hora_atual; //ponteiro para struct que armazena data e hora
  time_t segundos; //variável do tipo time_t para armazenar o tempo em segundos
  time(&segundos); //obter o tempo em segundos
  data_hora_atual = localtime(&segundos);

float hora(){

  printf("\tHora : %d:",data_hora_atual->tm_hour);//hora
  printf("%d",data_hora_atual->tm_min);//minuto
  printf("    Data : %d/", data_hora_atual->tm_mday);
  printf("%d/",data_hora_atual->tm_mon+1); //mês
  printf("%d\n",data_hora_atual->tm_year+1900); //ano
}
  float posX () {

    switch (posP1)
    {
       case 1:
       cp1++;

       l1 = 'X';
       system("CLS");
       printf("\n");
       hora();
       printf("\t+-----------------------------+\t\t+------------------------------+\n");
       printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
       printf("\t+-----------------------------+\t\t+------------------------------+\n");
       printf("\t|                             |\t\t|                              |\n");
       printf("\t|                             |\t\t|                              |\n");
       printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
       printf("\t|         ---------           |\t\t|         -----------          |\n");
       printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
       printf("\t|         ---------           |\t\t|         -----------          |\n");
       printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
       printf("\t|                             |\t\t|                              |\n");
       printf("\t|                             |\t\t|                              |\n");
       printf("\t+-----------------------------+\t\t+------------------------------+\n");
       b++;
       contador++;
       break;

        case 2:
        l2 = 'X';
        system("CLS");
        printf("\n");
        hora();
        printf("\t+-----------------------------+\t\t+------------------------------+\n");
        printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
        printf("\t+-----------------------------+\t\t+------------------------------+\n");
        printf("\t|                             |\t\t|                              |\n");
        printf("\t|                             |\t\t|                              |\n");
        printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
        printf("\t|         ---------           |\t\t|         -----------          |\n");
        printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
        printf("\t|         ---------           |\t\t|         -----------          |\n");
        printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
        printf("\t|                             |\t\t|                              |\n");
        printf("\t|                             |\t\t|                              |\n");
        printf("\t+-----------------------------+\t\t+------------------------------+\n");
        b++;
        contador++;
        break;

         case 3:
               l3 = 'X';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;
         case 4:
               l4 = 'X';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;
         case 5:
               l5 = 'X';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;
         case 6:
               l6 = 'X';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;
         case 7:
               l7 = 'X';
               contador++;
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               break;
         case 8:
               l8 = 'X';
                contador++;
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               break;
         case 9:
               l9 = 'X';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
                contador++;
               break;
       default:
         printf("Valor Incorreto");}}
  float posO () {

    switch (posP2)
    {
       case 1:
       l1 = 'O';  cp1++;
       system("CLS");
       printf("\n");
       hora();
       printf("\t+-----------------------------+\t\t+------------------------------+\n");
       printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
       printf("\t+-----------------------------+\t\t+------------------------------+\n");
       printf("\t|                             |\t\t|                              |\n");
       printf("\t|                             |\t\t|                              |\n");
       printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
       printf("\t|         ---------           |\t\t|         -----------          |\n");
       printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
       printf("\t|         ---------           |\t\t|         -----------          |\n");
       printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
       printf("\t|                             |\t\t|                              |\n");
       printf("\t|                             |\t\t|                              |\n");
       printf("\t+-----------------------------+\t\t+------------------------------+\n");
       b++;
       contador++;
       break;
        case 2:
        l2 = 'O';
        system("CLS");
        printf("\n");
        hora();
        printf("\t+-----------------------------+\t\t+------------------------------+\n");
        printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
        printf("\t+-----------------------------+\t\t+------------------------------+\n");
        printf("\t|                             |\t\t|                              |\n");
        printf("\t|                             |\t\t|                              |\n");
        printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
        printf("\t|         ---------           |\t\t|         -----------          |\n");
        printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
        printf("\t|         ---------           |\t\t|         -----------          |\n");
        printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
        printf("\t|                             |\t\t|                              |\n");
        printf("\t|                             |\t\t|                              |\n");
        printf("\t+-----------------------------+\t\t+------------------------------+\n");
        b++;
        contador++;
        break;

               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;
         case 4:
               l4 = 'O';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;
         case 5:
               l5 = 'O';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;
         case 6:
               l6 = 'O';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;
         case 7:
               l7 = 'O';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;
         case 8:
               l8 = 'O';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;

        case 9:
               l9 = 'O';
               system("CLS");
               printf("\n");
               hora();
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|           Tabuleiro         |\t\t|           Tabuleiro          |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|         %c | %c | %c           |\t\t|          1 | 2 | 3           |\n", l1, l2, l3);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          4 | 5 | 6           |\n", l4, l5, l6);
               printf("\t|         ---------           |\t\t|         -----------          |\n");
               printf("\t|         %c | %c | %c           |\t\t|          7 | 8 | 9           |\n", l7, l8,l9);
               printf("\t|                             |\t\t|                              |\n");
               printf("\t|                             |\t\t|                              |\n");
               printf("\t+-----------------------------+\t\t+------------------------------+\n");
               b++;
               contador++;
               break;       default:
          printf("Valor Incorreto");
    }}
  float menu(){

  contador = 0;  cp1 = 0;
  l1 = ' ';l2 = ' ';l3 = ' ';l4 = ' ';l5 = ' ';l6 = ' ';l7 = ' ';l8 = ' ';l9 = ' ';
  printf("\n");
  hora();
  printf("\t+------------------------------+\n");
  printf("\t|         JOGO DO GALO         |\n");
  printf("\t+------------------------------+\n");
  printf("\t|                              |\n");
  printf("\t|  1 - Jogar     2 - Intrucoes |\n");
  printf("\t|                              |\n");
  printf("\t|                              |\n");
  printf("\t|  3 - Cor       4 - Status    |\n");
  printf("\t|                              |\n");
  printf("\t|           0 - Sair           |\n");
  printf("\t|                              |\n");
  printf("\t|             By :             |\n");
  printf("\t|   Bruno Bita & Hugo Cabaret  |\n");
  printf("\t+------------------------------+\n");
  printf("\n-> Opcao : ");
  scanf("%i",&op);

  if (op == 1){
    //Antiga Verificacaomenu
    system("CLS");
    printf("\n");
    hora();
    printf("\t+------------------------------+\n");
    printf("\t|        Menu de Escolha       |\n");
    printf("\t+------------------------------+\n");
    printf("\t|                              |\n");
    printf("\t|                              |\n");
    printf("\t|    1 - Jogador X Jogador     |\n");
    printf("\t|                              |\n");
    printf("\t|                              |\n");
    printf("\t|                              |\n");
    printf("\t|      2 - Jogador x CPU       |\n");
    printf("\t|                              |\n");
    printf("\t|                              |\n");
    printf("\t+------------------------------+\n");
    printf("\n-> Opcao : ");
    scanf("%i",&opjogo);
    b = 0;
    if (opjogo == 1){
    printf("\n");
    system("CLS");
    printf("\n");
    hora();
    printf("\t+------------------------------+\n");
    printf("\t|           Tabuleiro          |\n");
    printf("\t+------------------------------+\n");
    printf("\t|                              |\n");
    printf("\t|                              |\n");
    printf("\t|          1 | 2 | 3           |\n");
    printf("\t|         -----------          |\n");
    printf("\t|          4 | 5 | 6           |\n");
    printf("\t|         -----------          |\n");
    printf("\t|          7 | 8 | 9           |\n");
    printf("\t|                              |\n");
    printf("\t|                              |\n");
    printf("\t+------------------------------+\n");
    printf("\n");
    printf("-> Nome do Primeiro Jogador (X) : ");
    scanf("%s", &P1);
    printf("-> Nome do Segundo Jogador (O) : ");
    scanf("%s", &P2);
    system("CLS");
    printf("\n");
    hora();
    printf("\t+------------------------------+\t\t+------------------------------+\n");
    printf("\t|           Tabuleiro          |\t\t|           Tabuleiro          |\n");
    printf("\t+------------------------------+\t\t+------------------------------+\n");
    printf("\t|                              |\t\t|                              |\n");
    printf("\t|                              |\t\t|                              |\n");
    printf("\t|          1 | 2 | 3           |\t\t|          1 | 2 | 3           |\n");
    printf("\t|         -----------          |\t\t|         -----------          |\n");
    printf("\t|          4 | 5 | 6           |\t\t|          4 | 5 | 6           |\n");
    printf("\t|         -----------          |\t\t|         -----------          |\n");
    printf("\t|          7 | 8 | 9           |\t\t|          7 | 8 | 9           |\n");
    printf("\t|                              |\t\t|                              |\n");
    printf("\t|                              |\t\t|                              |\n");
    printf("\t+------------------------------+\t\t+------------------------------+\n");


    //Antiga Função Contagem
    for (b = 0; b <= 9;){
      if (b % 2 == 0){
        posP1 = 0;
      if ((l1 == ' ') || (l2 == ' ') || (l3 == ' ') || (l4 == ' ') || (l5 == ' ') || (l6 == ' ') || (l7 == ' ') || (l8 == ' ') || (l9 == ' ')){
          do{
            printf("\n%s - Posicao : ", P1);
            scanf("%i", &posP1);
          if(posP1 == 1 && l1 != ' ')
          {
            printf("Essa posicao ja se encontra ocupada!\n");
            verificar = 0;
          }

           else if(posP1 == 2 && l2 != ' ')
          {
            printf("Essa posicao ja se encontra ocupada!\n");
            verificar = 0;
          }
          else if(posP1 == 3 && l3 != ' ')
         {
           printf("Essa posicao ja se encontra ocupada!\n");
           verificar = 0;
         }
         else if(posP1 == 4 && l4 != ' ')
        {
          printf("Essa posicao ja se encontra ocupada!\n");
          verificar = 0;
        }
        else if(posP1 == 5 && l5 != ' ')
       {
         printf("Essa posicao ja se encontra ocupada!\n");
         verificar = 0;
       }
       else if(posP1 == 6 && l6 != ' ')
      {
        printf("Essa posicao ja se encontra ocupada!\n");
        verificar = 0;
      }
      else if(posP1 == 7 && l7 != ' ')
     {
       printf("Essa posicao ja se encontra ocupada!\n");
       verificar = 0;
     }
     else if(posP1 == 8 && l8 != ' ')
    {
      printf("Essa posicao ja se encontra ocupada!\n");
      verificar = 0;
    }
    else if(posP1 == 9 && l9 != ' ')
   {
     printf("Essa posicao ja se encontra ocupada!\n");
     verificar = 0;
   }
        else
          {
            verificar = 1;
            posX();
            //Antiga Verificação X
            if (((l1 == 'X') && (l2 == 'X') && (l3 == 'X')) || ((l4 == 'X') && (l5 == 'X') && (l6 == 'X')) || ((l7 == 'X') && (l8 == 'X') && (l9 == 'X'))){
              system("CLS");
              printf("\n\t\tJOGADOR %s GANHOU!\n", P1);
              totalganhos++;
              b = 10;
              menu();
              //Verificação Linhas
            }

            if (((l1 == 'X') && (l4 == 'X') && (l7 == 'X')) || ((l2 == 'X') && (l5 == 'X') && (l8 == 'X')) || ((l3 == 'X') && (l6 == 'X') && (l9 == 'X'))){
              system("CLS");
              printf("\n\t\tJOGADOR %s GANHOU!\n", P1);
              totalganhos++;
              b = 10;
              menu();
              //Verificação Colunas
            }

            if (((l1 == 'X') && (l5 == 'X') && (l9 == 'X')) || ((l3 == 'X') && (l5 == 'X') && (l7 == 'X'))){
              system("CLS");
              printf("\n\t\tJOGADOR %s GANHOU!\n", P1);
              totalganhos++;
              b = 10;
              menu();
              //Verificação Diagonais
            }
            if (b == 9){
              system("CLS");
              printf("\n\t\tEMPATE!");
              totalempates++;
              menu();
            }
          }
          } while (verificar != 1);
        }}

else if (b % 2 != 0){
  posP2 = 0;
    if ((l1 == ' ') || (l2 == ' ') || (l3 == ' ') || (l4 == ' ') || (l5 == ' ') || (l6 == ' ') || (l7 == ' ') || (l8 == ' ') || (l9 == ' ')){
      do{
        printf("\n%s - Posicao : ", P2);
        scanf("%i", &posP2);
      if(posP2 == 1 && l1 != ' ')
      {
        printf("Essa posicao ja se encontra ocupada!\n");
        verificar = 0;
      }
    else if(posP2 == 2 && l2 != ' ')
      {
        printf("Essa posicao ja se encontra ocupada!\n");
        verificar = 0;
      }
      else if(posP2 == 3 && l3 != ' ')
     {
       printf("Essa posicao ja se encontra ocupada!\n");
       verificar = 0;
     }
     else if(posP2 == 4 && l4 != ' ')
    {
      printf("Essa posicao ja se encontra ocupada!\n");
      verificar = 0;
    }
    else if(posP2 == 5 && l5 != ' ')
    {
     printf("Essa posicao ja se encontra ocupada!\n");
     verificar = 0;
    }
    else if(posP2 == 6 && l6 != ' ')
    {
    printf("Essa posicao ja se encontra ocupada!\n");
    verificar = 0;
    }
    else if(posP2 == 7 && l7 != ' ')
    {
    printf("Essa posicao ja se encontra ocupada!\n");
    verificar = 0;
    }
    else if(posP2 == 8 && l8 != ' ')
    {
    printf("Essa posicao ja se encontra ocupada!\n");
    verificar = 0;
    }
    else if(posP2 == 9 && l9 != ' ')
    {
    printf("Essa posicao ja se encontra ocupada!\n");
    verificar = 0;
    }
      else
      {
        verificar = 1;
        posO();
        //Antiga VerificacaoO

        if (((l1 == 'O') && (l2 == 'O') && (l3 == 'O')) || ((l4 == 'O') && (l5 == 'O') && (l6 == 'O')) || ((l7 == 'O') && (l8 == 'O') && (l9 == 'O'))){
          system("CLS");
          printf("\n\t\tJOGADOR %s GANHOU!\n", P2);
          totalganhos++;
          menu();
          //Verificação Linhas
        }

        if (((l1 == 'O') && (l4 == 'O') && (l7 == 'O')) || ((l2 == 'O') && (l5 == 'O') && (l8 == 'O')) || ((l3 == 'O') && (l6 == 'O') && (l9 == 'O'))){
          system("CLS");
          printf("\n\t\tJOGADOR %s GANHOU!\n", P2);
          totalganhos++;
          menu();
          //Verificação Colunas
        }

        if (((l1 == 'O') && (l5 == 'O') && (l9 == 'O')) || ((l3 == 'O') && (l5 == 'O') && (l7 == 'O'))){
          system("CLS");
          printf("\n\t\tJOGADOR %s GANHOU!\n", P2);
          totalganhos++;
          menu();
          //Verificação Diagonais
        }
        if (b == 9){
          printf("\n\t\tTEMPLATE");
          totalempates++;
          menu();
        }

      }
    } while (verificar != 1);}}}}else if (opjogo == 2){
      srand(time(NULL));
      b = 0;
      system("CLS");
      printf("\n");
      hora();
      printf("\t+------------------------------+\n");
      printf("\t|           Tabuleiro          |\n");
      printf("\t+------------------------------+\n");
      printf("\t|                              |\n");
      printf("\t|                              |\n");
      printf("\t|          1 | 2 | 3           |\n");
      printf("\t|         -----------          |\n");
      printf("\t|          4 | 5 | 6           |\n");
      printf("\t|         -----------          |\n");
      printf("\t|          7 | 8 | 9           |\n");
      printf("\t|                              |\n");
      printf("\t|                              |\n");
      printf("\t+------------------------------+\n");
      printf("\n");
      printf("-> Nome do Jogador : ");
      scanf("%s", &P1);
      system("CLS");
      printf("\n");
      hora();
      printf("\t+------------------------------+\n");
      printf("\t|           Tabuleiro          |\n");
      printf("\t+------------------------------+\n");
      printf("\t|                              |\n");
      printf("\t|                              |\n");
      printf("\t|          1 | 2 | 3           |\n");
      printf("\t|         -----------          |\n");
      printf("\t|          4 | 5 | 6           |\n");
      printf("\t|         -----------          |\n");
      printf("\t|          7 | 8 | 9           |\n");
      printf("\t|                              |\n");
      printf("\t|                              |\n");
      printf("\t+------------------------------+\n");
      for (b = 0; b <= 9;){
        if (b % 2 == 0){
          posP1 = 0;
        if ((l1 == ' ') || (l2 == ' ') || (l3 == ' ') || (l4 == ' ') || (l5 == ' ') || (l6 == ' ') || (l7 == ' ') || (l8 == ' ') || (l9 == ' ')){
            do{
              printf("\n%s - Posicao : ", P1);
              scanf("%i", &posP1);
            if(posP1 == 1 && l1 != ' ')
            {
              printf("Essa posicao ja se encontra ocupada!\n");
              verificar = 0;
            }

             else if(posP1 == 2 && l2 != ' ')
            {
              printf("Essa posicao ja se encontra ocupada!\n");
              verificar = 0;
            }
            else if(posP1 == 3 && l3 != ' ')
           {
             printf("Essa posicao ja se encontra ocupada!\n");
             verificar = 0;
           }
           else if(posP1 == 4 && l4 != ' ')
          {
            printf("Essa posicao ja se encontra ocupada!\n");
            verificar = 0;
          }
          else if(posP1 == 5 && l5 != ' ')
         {
           printf("Essa posicao ja se encontra ocupada!\n");
           verificar = 0;
         }
         else if(posP1 == 6 && l6 != ' ')
        {
          printf("Essa posicao ja se encontra ocupada!\n");
          verificar = 0;
        }
        else if(posP1 == 7 && l7 != ' ')
       {
         printf("Essa posicao ja se encontra ocupada!\n");
         verificar = 0;
       }
       else if(posP1 == 8 && l8 != ' ')
      {
        printf("Essa posicao ja se encontra ocupada!\n");
        verificar = 0;
      }
      else if(posP1 == 9 && l9 != ' ')
     {
       printf("Essa posicao ja se encontra ocupada!\n");
       verificar = 0;
     }
          else
            {
              verificar = 1;
              posX();
              //Antiga Verificação X
              if (((l1 == 'X') && (l2 == 'X') && (l3 == 'X')) || ((l4 == 'X') && (l5 == 'X') && (l6 == 'X')) || ((l7 == 'X') && (l8 == 'X') && (l9 == 'X'))){
                system("CLS");
                printf("\n\t\tJOGADOR %s GANHOU!\n", P1);
                totalganhos++;
                b = 10;
                menu();
                //Verificação Linhas
              }

              if (((l1 == 'X') && (l4 == 'X') && (l7 == 'X')) || ((l2 == 'X') && (l5 == 'X') && (l8 == 'X')) || ((l3 == 'X') && (l6 == 'X') && (l9 == 'X'))){
                system("CLS");
                printf("\n\t\tJOGADOR %s GANHOU!\n", P1);
                totalganhos++;
                b = 10;
                menu();
                //Verificação Colunas
              }

              if (((l1 == 'X') && (l5 == 'X') && (l9 == 'X')) || ((l3 == 'X') && (l5 == 'X') && (l7 == 'X'))){
                system("CLS");
                printf("\n\t\tJOGADOR %s GANHOU!\n", P1);
                totalganhos++;
                b = 10;
                menu();
                //Verificação Diagonais
              }
              if (b == 9){
                system("CLS");
                printf("\n\t\tEMPATE");
                totalempates++;
                menu();
              }
            }
            } while (verificar != 1);
          }}

    else if (b % 2 != 0){
    posP2 = 0;
      if ((l1 == ' ') || (l2 == ' ') || (l3 == ' ') || (l4 == ' ') || (l5 == ' ') || (l6 == ' ') || (l7 == ' ') || (l8 == ' ') || (l9 == ' ')){
        do{
          posP2 =  rand() % 10;
        if(posP2 == 1 && l1 != ' ')
        {
          verificar = 0;
        }
      else if(posP2 == 2 && l2 != ' ')
        {
          verificar = 0;
        }
        else if(posP2 == 3 && l3 != ' ')
       {
         verificar = 0;
       }
       else if(posP2 == 4 && l4 != ' ')
      {
        verificar = 0;
      }
      else if(posP2 == 5 && l5 != ' ')
      {
       verificar = 0;
      }
      else if(posP2 == 6 && l6 != ' ')
      {
      verificar = 0;
      }
      else if(posP2 == 7 && l7 != ' ')
      {
      verificar = 0;
      }
      else if(posP2 == 8 && l8 != ' ')
      {
      verificar = 0;
      }
      else if(posP2 == 9 && l9 != ' ')
      {
      verificar = 0;
      }
        else
        {
          verificar = 1;
          posO();
          //Antiga VerificacaoO

          if (((l1 == 'O') && (l2 == 'O') && (l3 == 'O')) || ((l4 == 'O') && (l5 == 'O') && (l6 == 'O')) || ((l7 == 'O') && (l8 == 'O') && (l9 == 'O'))){
            system("CLS");
            printf("\n\t\tCPU ganhou!", P2);
            totalganhos++;
            menu();
            //Verificação Linhas
          }

          if (((l1 == 'O') && (l4 == 'O') && (l7 == 'O')) || ((l2 == 'O') && (l5 == 'O') && (l8 == 'O')) || ((l3 == 'O') && (l6 == 'O') && (l9 == 'O'))){
            system("CLS");
            printf("\n\t\tCPU ganhou!", P2);
            totalganhos++;
            menu();
            //Verificação Colunas
          }

          if (((l1 == 'O') && (l5 == 'O') && (l9 == 'O')) || ((l3 == 'O') && (l5 == 'O') && (l7 == 'O'))){
            system("CLS");
            printf("\n\t\tCPU ganhou!", P2);
            totalganhos++;
            menu();
            //Verificação Diagonais
          }
          if (b == 9){
            printf("\n\t\tEMPATE");
            totalempates++;
            menu();
          }

        }
        } while (verificar != 1);}}
    }
    }
}
  if (op == 2){
    system("CLS");
    printf("\n");
    hora();
    printf("\t+------------------------------+\n");
    printf("\t|          Instrucoes          |\n");
    printf("\t+------------------------------+\n");
    printf("\t|                              |\n");
    printf("\t|      Numero de Jogadores     |\n");
    printf("\t|               2              |\n");
    printf("\t|                              |\n");
    printf("\t|           Objetivo           |\n");
    printf("\t|        Fazer uma linha       |\n");
    printf("\t|       com um so simbolo      |\n");
    printf("\t|                              |\n");
    printf("\t|                              |\n");
    printf("\t|          0 - Voltar          |\n");
    printf("\t|                              |\n");
    printf("\t+------------------------------+\n");
    printf("\n-> Opcao : ");
    scanf("%i",&opinstrucoes);

    switch (opinstrucoes) {
      case 0:
        system("CLS");
        menu();
    }
  }
  if (op == 3 ){

  do {
    system("CLS");
    printf("\n");
    hora();
    printf("\t+------------------------------+\n");
    printf("\t|         MUDAR DE COR         |\n");
    printf("\t+------------------------------+\n");
    printf("\t|                              |\n");
    printf("\t|  1 - Branco     4 - Verde    |\n");
    printf("\t|                              |\n");
    printf("\t|  2 - Roxo       5 - Vermelho |\n");
    printf("\t|                              |\n");
    printf("\t|  3 - Azul       6 - Amarelo  |\n");
    printf("\t|                              |\n");
    printf("\t|                              |\n");
    printf("\t|                              |\n");
    printf("\t|          0 - Voltar          |\n");
    printf("\t|                              |\n");
    printf("\t+------------------------------+\n");
    printf("\n-> Opcao : ");
    scanf("%i",&opcor);


switch (opcor) {
  case 1:
    system("COLOR 07");
    break;
  case 2:
    system("COLOR 05");
    break;
  case 3:
    system("COLOR 03");
    break;
  case 4:
    system("COLOR 0A");
    break;
  case 5:
    system("COLOR 0C");
    break;
  case 6:
    system("COLOR 0E");
    break;
  case 0:
    opcor = -1;
    system("CLS");
    menu();
}
} while(opcor != -1);
}
  if (op == 4){
  system("CLS");
  printf("\n");
  hora();
  printf("\t+------------------------------+\n");
  printf("\t|            Status            |\n");
  printf("\t+------------------------------+\n");
  printf("\t|                              |\n");
  printf("\t|     Total de Jogos Ganhos    |\n");
  printf("\t|               %i              |\n",totalganhos);
  printf("\t|                              |\n");
  printf("\t|      Total de Empatados      |\n");
  printf("\t|               %i              |\n",totalempates);
  printf("\t|                              |\n");
  printf("\t|                              |\n");
  printf("\t|          0 - Voltar          |\n");
  printf("\t|                              |\n");
  printf("\t+------------------------------+\n");
  printf("\n-> Opcao : ");
  scanf("%i",&opstatus);

  switch (opstatus) {
    case 0:
      system("CLS");
      menu();
  }

}
  if (op == 0){

    return 1;
  }
  if ((op < 0) || (op>4)){

  system("CLS");
  menu();
  }
}

  menu();
  return 0;
}
