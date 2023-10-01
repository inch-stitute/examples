#include <stdio.h>
#include <stdlib.h>

int div(int a, int b) {
  /*
  diviser a par b SANS UTILISER l'opérateur /
  exo 2: afficher aussi le reste.
  */
  return a;
}

int main(int argc, char *argv[]) {
  int a, b;
  printf("Entrez le numérateur (en haut) : ");
  scanf("%d", &a);
  printf("Entrez le dénominateur (en bas) : ");
  scanf("%d", &b);
  int r = div(a, b);
  printf("%d divisé par %d vaut %d", a, b, r);
  return EXIT_SUCCESS;
}
