#include <stdio.h>
/*
TAREFA:

Deverá ser postado o código de um programa em linguagem C que realize contas
matemáticas simples (operações aritméticas) de modo que:
? exiba ao usuário uma mensagem indicando sua autoria (apresentando nome
e a matrícula do aluno);
? faça a leitura de dois números inteiros;
? consulte o usuário sobre qual operação aritmética deseja realizar (deverá
mostrar pelo menos duas opções, sendo uma delas necessariamente a
divisão);
? realize a conta corretamente e exiba o resultado para o usuário;
? esteja com formatação correta, variáveis com nomes adequados e
comentários pertinentes;
? contenha uma breve explicação do que o código faz que deverá estar
incluída na forma de um comentário no início do código. Nesse comentário
inicial, deverá ser indicado de onde foi copiado/adaptado, ou se é da autoria
do próprio aluno.*/
int main(void) {
  //Variáveis informadas pelo usuário (dados de entrada)
  float a, b;
  //Variável que ficará reponsável por armazenar o resultado das operações (dados de saída)
  float result;
  /*Variável informada pelo usuário que indicará qual operação deseja realizar; 
  "quit" será usada para implementar um laço de repetição.*/
  int escolha, quit = 1;

  printf("Este trabalho tem como objetivo construir uma calculadora de operções simples, que consistem em 4 operações básicas, são elas, 'Adição', 'subtração', 'multiplicação' e 'divisão'. Este trabalho é de autoria própria e foi realizado pelo aluno Gabriel Ternes dos Santos com a matrícula nº 202112296.\n");

  printf("\n");

  //Criei um laço de repetição. Enquanto o usuário não escolher sair ele poderá realizar quantas operações desejar sem precisar rodar o programa múltiplas vezes.
while (quit != 0){
  //Menu para a interação do usuário
  printf("-------------Menu-------------\n");
  printf("1. Adição;\n");
  printf("2. Subtração;\n");
  printf("3. Multiplicação;\n");
  printf("4. Divisão;\n");
  printf("0. Sair;\n");
  printf("Por favor, escolha uma das opções acima: ");
  scanf("%d", &escolha);
/*Ao selecionar uma das opções o usuário terá que digitar os dois números com que deseja realizar a operação, caso não seja um número válido ele entrará no case default e deverá digitar um número válido. Caso deseje sair do loop basta digitar o 0 o que o levará até o "case 0" onde a variável "quit" receberá "0" e o código sairá do loop.*/
  switch(escolha){
   case 1:
      printf("Você escolheu a opção 1, Adição\n");
      printf("Por favor digite a seguir os dois algarismos a serem somados: \n");
      printf("Número 1:\n");
      scanf("%f", &a);
      printf("Número 2:\n");
      scanf("%f", &b);
      result = a + b;
      printf("O resultado da soma é: %.1f\n", result);
    break;
    case 2:
      printf("Você escolheu a opção 2, Subtração\n");
      printf("Por favor digite a seguir os dois algarismos a serem subtraidos: \n");
      printf("Número 1:\n");
      scanf("%f", &a);
      printf("Número 2:\n");
      scanf("%f", &b);
      result = a - b;
      printf("O resultado da subtração é: %.1f\n", result);
    break;
    case 3:
      printf("Você escolheu a opção 3, Multiplicação\n");
      printf("Por favor digite a seguir os dois algarismos a serem multiplicados: \n");
      printf("Número 1:\n");
      scanf("%f", &a);
      printf("Número 2:\n");
      scanf("%f", &b);
      result = a * b;
      printf("O resultado da multiplicação é: %.1f\n", result);
    break;
    case 4:
      printf("Você escolheu a opção 4, Divisão\n");
      printf("Por favor digite a seguir os dois algarismos a serem divididos: \n");
      printf("Número 1:\n");
      scanf("%f", &a);
      printf("Número 2:\n");
      scanf("%f", &b);
      result = a / b;
      printf("O resultado da divisão é: %.2f\n", result);
    break;
    case 0:
      quit = 0;
    break;
    default:
      printf("\n");
      printf("Por favor digite um número válido!\n");
      printf("\n");
    break;
  }
}
  return 0;
}
