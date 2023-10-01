#include <stdio.h>
#include <stdlib.h>

void hex(int n) {
  /*
  afficher n en base 16 (hexadécimal).
  note: rien n'est retourné par la procédure, afficher le résultat directement ici. 
  */
  return n;
}

// ne pas toucher pour le moment
int main(int argc, char *argv[]) {
  int k;
  printf("Entrez une valeur entiere : ");
  scanf("%d", &k);
  hex(k);
  return EXIT_SUCCESS;
}
