#include <stdio.h>

int main(void) {
  float sp = 67836.43;
  float rj = 36678.66;
  float mg = 29229.88;
  float es = 27165.48;
  float outros = 19849.53;

  float total = sp + rj + mg + es + outros;

  // printf("%f", total);

  float perc_sp = (sp / total) * 100;
  float perc_rj = (rj / total) * 100;
  float perc_mg = (mg / total) * 100;
  float perc_es = (es / total) * 100;
  float perc_outros = (outros / total) * 100;

  printf("\n");
  printf("===PERCENTUAL=DE=CADA=ESTADO===\n");
  printf("\n");
  printf("Faturamento aproximado de SP: [%.0f%]\n", perc_sp);
  printf("Faturamento aproximado de RJ: [%.0f%]\n", perc_rj);
  printf("Faturamento aproximado de MG: [%.0f%]\n", perc_mg);
  printf("Faturamento aproximado de ES: [%.0f%]\n", perc_es);
  printf("Faturamento aproximado dos OUTROS: [%.0f%]\n", perc_outros);
  printf("\n");

  return 0;
}