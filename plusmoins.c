#include <stdio.h>
#include <stdlib.h>

void plus_ou_moins(int v) {
  /*
  implémenter ici la logique du plus ou moins, v étant la valeur à trouver.
  la procédure ne retourne rien, toute la logique du jeu doit être dedans.
  */
  return;
}

// ne pas toucher pour le moment
int main(int argc, char *argv[]) {
  int max_v = 100;
  srand(time(NULL));
  int v = rand() % max_v;
  printf("Trouver une valeur entre 0 et %d", max_v);
  plus_ou_moins(v);
  printf("Le nombre à trouver était %d", v);
  return EXIT_SUCCESS;
}
