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

int plusProcheMoyenne (int n, int tab[]) {
  
  int i, cible;
  float somme = 0, moyenne, dif, prec;
  
  for(i = 0; i < n; i++){
    somme = somme + tab[i]; // calculer la moyenne des elements du tableau
  }
  moyenne = somme / n;
  printf("La moyenne des elements du tableau est %.2f.\n", moyenne);
  
  cible = tab[0]; // considerer T[0] comme etant l'element le plus proche de la moyenne
  for(i = 1; i < n; i++){ // parcourir le tableau
    dif = tab[i] - moyenne; // calculer la difference entre T[1] et la moyenne
    prec = cible - moyenne; // calculer la difference entre T[0] et la moyenne
    if(dif < 0) // si la valeur de (T[1]-moyenne) negatif
      dif = (-1) * dif; // multiplier dif par (-1)
    if(prec < 0) // si la valeur de (T[0]-moyenne) negatif
      prec = (-1) * prec; // multiplier prec par (-1)
    if(dif < prec) // comparer dif et prec, si (T[1]-moyenne) < (T[0]-moyenne)
      cible = tab[i]; // affecter a cible la valeur de T[1]
    // sinon, cible garde la valeur de T[0]
  } // ainsi de suite
  
  return cible;
  
}

int main () {
  
  int N;
  int T[taille];
  
  N = saisieTaille ();
  saisieElement (N, T);
  
  printf ("L'element le plus proche de la moyenne est : %d \n", plusProcheMoyenne (N, T));
  
  return 0;
  
}
