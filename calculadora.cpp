#include <stdio.h>
/*
TAREFA:

Dever� ser postado o c�digo de um programa em linguagem C que realize contas
matem�ticas simples (opera��es aritm�ticas) de modo que:
? exiba ao usu�rio uma mensagem indicando sua autoria (apresentando nome
e a matr�cula do aluno);
? fa�a a leitura de dois n�meros inteiros;
? consulte o usu�rio sobre qual opera��o aritm�tica deseja realizar (dever�
mostrar pelo menos duas op��es, sendo uma delas necessariamente a
divis�o);
? realize a conta corretamente e exiba o resultado para o usu�rio;
? esteja com formata��o correta, vari�veis com nomes adequados e
coment�rios pertinentes;
? contenha uma breve explica��o do que o c�digo faz que dever� estar
inclu�da na forma de um coment�rio no in�cio do c�digo. Nesse coment�rio
inicial, dever� ser indicado de onde foi copiado/adaptado, ou se � da autoria
do pr�prio aluno.*/
int main(void) {
  //Vari�veis informadas pelo usu�rio (dados de entrada)
  float a, b;
  //Vari�vel que ficar� repons�vel por armazenar o resultado das opera��es (dados de sa�da)
  float result;
  /*Vari�vel informada pelo usu�rio que indicar� qual opera��o deseja realizar; 
  "quit" ser� usada para implementar um la�o de repeti��o.*/
  int escolha, quit = 1;

  printf("Este trabalho tem como objetivo construir uma calculadora de oper��es simples, que consistem em 4 opera��es b�sicas, s�o elas, 'Adi��o', 'subtra��o', 'multiplica��o' e 'divis�o'. Este trabalho � de autoria pr�pria e foi realizado pelo aluno Gabriel Ternes dos Santos com a matr�cula n� 202112296.\n");

  printf("\n");

  //Criei um la�o de repeti��o. Enquanto o usu�rio n�o escolher sair ele poder� realizar quantas opera��es desejar sem precisar rodar o programa m�ltiplas vezes.
while (quit != 0){
  //Menu para a intera��o do usu�rio
  printf("-------------Menu-------------\n");
  printf("1. Adi��o;\n");
  printf("2. Subtra��o;\n");
  printf("3. Multiplica��o;\n");
  printf("4. Divis�o;\n");
  printf("0. Sair;\n");
  printf("Por favor, escolha uma das op��es acima: ");
  scanf("%d", &escolha);
/*Ao selecionar uma das op��es o usu�rio ter� que digitar os dois n�meros com que deseja realizar a opera��o, caso n�o seja um n�mero v�lido ele entrar� no case default e dever� digitar um n�mero v�lido. Caso deseje sair do loop basta digitar o 0 o que o levar� at� o "case 0" onde a vari�vel "quit" receber� "0" e o c�digo sair� do loop.*/
  switch(escolha){
   case 1:
      printf("Voc� escolheu a op��o 1, Adi��o\n");
      printf("Por favor digite a seguir os dois algarismos a serem somados: \n");
      printf("N�mero 1:\n");
      scanf("%f", &a);
      printf("N�mero 2:\n");
      scanf("%f", &b);
      result = a + b;
      printf("O resultado da soma �: %.1f\n", result);
    break;
    case 2:
      printf("Voc� escolheu a op��o 2, Subtra��o\n");
      printf("Por favor digite a seguir os dois algarismos a serem subtraidos: \n");
      printf("N�mero 1:\n");
      scanf("%f", &a);
      printf("N�mero 2:\n");
      scanf("%f", &b);
      result = a - b;
      printf("O resultado da subtra��o �: %.1f\n", result);
    break;
    case 3:
      printf("Voc� escolheu a op��o 3, Multiplica��o\n");
      printf("Por favor digite a seguir os dois algarismos a serem multiplicados: \n");
      printf("N�mero 1:\n");
      scanf("%f", &a);
      printf("N�mero 2:\n");
      scanf("%f", &b);
      result = a * b;
      printf("O resultado da multiplica��o �: %.1f\n", result);
    break;
    case 4:
      printf("Voc� escolheu a op��o 4, Divis�o\n");
      printf("Por favor digite a seguir os dois algarismos a serem divididos: \n");
      printf("N�mero 1:\n");
      scanf("%f", &a);
      printf("N�mero 2:\n");
      scanf("%f", &b);
      result = a / b;
      printf("O resultado da divis�o �: %.2f\n", result);
    break;
    case 0:
      quit = 0;
    break;
    default:
      printf("\n");
      printf("Por favor digite um n�mero v�lido!\n");
      printf("\n");
    break;
  }
}
  return 0;
}
