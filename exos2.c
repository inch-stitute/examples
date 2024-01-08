#include <stdio.h>
#include <stdlib.h>

// Exemples de code
int exemples(int nb) {
  if (nb == 0) {
    printf("Le nombre vaut zéro.\n");
  } else if (nb % 2 == 0) {
    printf("Le nombre est pair.\n");
  } else {
    printf("Le nombre est impair.\n");
  }

  for (int i = 0; i < 10; i++) {
    printf("Itération %d / 10\n", i);
  }

  int p = nb;
  while (nb > 1) {
    p += nb;
    nb = nb / 3;
  }

  return p;
}

void ma_fonction() {
  int ma_variable;
  printf("Donnez un entier:\n");
  scanf("%d", &ma_variable);

  int resultat = exemples(ma_variable);

  printf("Il y a 3 fois %d dans %d.\n", resultat, ma_variable);
  return;
}

// Ecrire un programme C qui permet de permuter le contenu de deux variables entières
void permutation() {
  int a, b;

  printf("Entrez deux entiers a et b:\n");
  scanf("%d%d", &a, &b);

  printf("Avant permutation: a = %d et b = %d.\n", a, b);
  // coder ici

  printf("Apres permutation: a = %d et b = %d.\n", a, b);
  return;
}

// Ecrire un programme C qui lit un entier puis détermine s’il est premier ou non.
void premier() {
  int p;
  printf("Donnez un entier:\n");
  scanf("%d", &p);

  // coder ici
  return;
}

// Ecrire un programme C qui lit trois entiers pour les afficher ensuite dans un ordre croissant.
void croissant() { return; }

// Ecrire un programme C qui permet de permuter le contenu de deux variables entières en utilisant des pointeurs.
void permutation_pointeur() { return; }

// Ecrire un programme C qui permet de permuter le contenu de deux variables entières passées en paramètre.
void permutation_pointeur_fonction(int *a, int *b) {
  printf("Avant permutation: a = %d et b = %d.\n", *a, *b);
  // coder ici

  printf("Apres permutation: a = %d et b = %d.\n", *a, *b);
  return;
}

// ne pas toucher pour le moment
int main(int argc, char *argv[]) {
  ma_fonction();
  // premier();
  // croissant();
  // permutation();
  // permutation_pointeur();
  return EXIT_SUCCESS;
}
