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

int recherche (int m, int tab1[], int n, int tab2[]) {
  
  int i, j;
  
  for (i = 0; i <= m - n; i++) {
    for (j = 0; j < n; j++) {
      if (tab1[i + j] != tab2[j])
        break;
    }
    if (j == n)
      return i;
  }
  
  return -1;
  
}

void suppression (int m, int tab1[], int position, int n) {
  
    int i;
    
    for (i = position + n; i < m; i++) {
      tab1[i - n] = tab1[i];
    }
  
}

int main () {
  
  int M, N;
  int T1[taille], T2[taille];
  int trouve;
  
  printf ("Taille de T1 : \n");
  M = saisieTaille ();
  printf ("Elements de T1 : \n");
  saisieElement (M, T1);
  affichage (M, T1);
  
  printf ("Taille de T2 : \n");
  N = saisieTaille ();
  printf ("Elements de T2 : \n");
  saisieElement (N, T2);
  affichage (N, T2);
  
  trouve = recherche (M, T1, N, T2);
  //printf ("%d \n", trouve);
  
  if (trouve == -1) {
    printf ("T2 n'existe pas dans T1. \n");
  } else {
    printf ("T2 existe dans T1. \n");
    suppression (M, T1, trouve, N);
    affichage (M - N, T1);
  }
  
  return 0;
  
}
