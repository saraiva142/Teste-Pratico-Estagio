#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
  int vet[0];
  int i, x = 0, fib1 = 1, fib2 = 1, soma;
  for (i = 3; i <= 9999; i = i + 1) {
    soma = fib1 + fib2;
    fib1 = fib2;
    fib2 = soma;
    for (x = 0; x <= i; x++) {
      vet[x] = fib2;
    }
    if (vet[x] == n) {
      printf("O numero %d pertence a sequencia de fibonacci\n", n);
    }
  }

  return 0;
}

int main(void) {
  int num;

  printf("\n");
  printf("=====EXERCICIO=2=FIBONACCI=====\n");
  printf("\n");

  printf("Digite um número:\n");
  scanf("%d", &num);

  if (num == 0 || num == 1) {
    printf("O numero %d pertence a sequencia de Fibonacci", num);
  }

  fibonacci(num);

  return 0;
}
