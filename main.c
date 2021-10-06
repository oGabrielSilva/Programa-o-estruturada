#include <stdio.h>

int main(void) {
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
  return 0;
}