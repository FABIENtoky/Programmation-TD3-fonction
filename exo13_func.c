#include <stdio.h>
#include <stdlib.h>
#define taille 50

int saisieDegre () {
  
  int degre;
  
  printf ("Entrer le nombre de lignes : ");
  scanf ("%d", &degre);
  
  return degre;
}

int factorielle (int a) {

  int fact = 1, i;
  
  if (a == 0) {
    fact = 1;
  } else {
    for (i = 1; i <= a; i++) {
      fact *= i;
    }
  }
  
  return fact;
}

void affichage (int n) {

  int i, j;
  long elem;
  
  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      elem = factorielle(i) / (factorielle(j) * factorielle(i - j));
      if (elem != 0)
	printf ("%ld  ", elem);
    }
    printf ("\n");
  }  
  
}

int main () {
  
  int n;
  
  n = saisieDegre ();
  affichage (n);
  
  return 0;
}
