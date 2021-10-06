#include <stdio.h>

void quest_one() {
  int number;
  float numberFloat;
  char string[30];
  printf("Digite um número inteiro: ");
  scanf("%d", &number);
  printf("Digite um número decimal: ");
  scanf("%f", &numberFloat);
  printf("Digite um nome: ");
  scanf("%s", string);
  printf("Você digitou o número %d e o número %f. Depois digitou o nome %s.", number, numberFloat, string);
}

void quest_two() {
  float first_n, second_n, m, result;
  printf("Digite a média necessária para aprovação: ");
  scanf("%f", &m);
  printf("Agora digite a primeira nota: ");
  scanf("%f", &first_n);
  printf("Agora digite a segunda nota: ");
  scanf("%f", &second_n);
  result = (first_n + second_n) / 2;

  if(result >= m) printf("Aluno aprovado! Média: %f.", result);
  else if(result > 3) printf("Aluno reprovado, mas com chance de recuperação! Média: %f. :c", result);
  else printf("Aluno reprovado! Média: %f.", result);
}

void quest_tree() {
  int user_age;
  printf("Digite a sua idade: ");
  scanf("%d", &user_age);
  if(user_age < 60) printf("Você ainda não chegou na terceira idade. :3");
  else printf("Você alcançou a terceira idade. :D");
}

int main(void) {
  int aux;
  printf("Digite 1 para a questão 1, 2 para a dois e 3 para a 3 ou qualquer outro número para fechar.\n");
  scanf("%d", &aux);
  if(aux == 1) quest_one();
  else if(aux == 2) quest_two();
  else if(aux == 3) quest_tree();
  printf("\n\nEncerrando app...\n");
  return 0;
}