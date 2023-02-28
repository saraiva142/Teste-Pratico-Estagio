#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 999

int main(void) {
  char str[TAM], nova;
  int i, len;

  printf("\n");
  printf("===Inversor=de=String===\n");
  printf("\n");
  printf("Digite alguma frase:\n");
  printf("\n");
  scanf("%s", str);
  len = strlen(str);

  for (i = 0; i < len / 2; i++) {
    nova = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = nova;
  }
  printf("\n");
  printf("String Invertida:\n");
  printf("\n");
  printf("%s\n", str);
  printf("\n");

  return 0;
}