#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
  /*
  écrire ici le code permettant de calculer la suite de fibonacci f(n).
  infos: f(0) = 0, f(1) = 1, f(n + 2) = f(n - 1) + f(n - 2) pour n >= 2
  */
  return n;
}

// ne pas toucher pour le moment
int main(int argc, char *argv[]) {
  int k;
  printf("Entrez une valeur entiere : ");
  scanf("%d", &k);
  int r = fibonacci(k);
  printf("f(%d) = %d\n", k, r);
  return EXIT_SUCCESS;
}
