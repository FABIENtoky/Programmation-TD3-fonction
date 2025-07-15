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

int insertion (int n, int tab[]) {
  
  int x, position, i;
  
  printf("Entrer l'element que vous voulez inserez : ");
  scanf("%d", &x);
  
  printf("Dans quelle position voulez vous inserez l'element %d ? ", x);
  scanf("%d", &position);
  
  n++;
  for(i = (n - 1); i >= (position - 1); i--){
    tab[i + 1] = tab[i];
  }
  tab[position - 1] = x;
  
  return n;
  
}

int main () {
  
  int N, n;
  int T[taille];
  
  N = saisieTaille ();
  saisieElement (N, T);
  n = insertion (N, T);
  affichage (n, T);
  
  return 0;

}
