#include <stdio.h>
#include <stdlib.h>
#define taille 50

int saisieTaille () {

  int compteur = 0;
  int n;
  
  do {
    compteur ++;
    if (compteur == 4)
      exit (0);
    printf ("Entrer n, la taille du tableau(compris entre 1 et 50) : ");
    scanf ("%d", &n);
  } while (n < 1 || n > 50);
  
  return n;

}

void saisieElement (int n, int tab[]) {

  int i;
  
  printf ("Entrer la valeur de chaque element du tableau : \n");
  for (i = 0; i < n; i++) {
    printf ("tab[%d] = ", i);
    scanf ("%d", &tab[i]);
  }

}

void affichage (int n, int tab[]) {

  int i;
  
  printf ("[");
  for (i = 0; i < n; i++) {
    printf ("%d", tab[i]);
    if (i < n - 1)
      printf (", ");
  }
  printf ("] \n");

}

void triagePair (int n, int tab[]) {
  
  int i, j, temp;
  
  for (i = 0; i < n; i++) {
    for (j = (i + 1); j < n; j++) {
      if (tab[j] % 2 == 0) {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
      }
    }
  }
  
}

int main () {

  int N;
  int T[taille];
  
  N = saisieTaille ();
  saisieElement (N, T);
  triagePair (N, T);
  affichage (N, T);

  return 0;

}
