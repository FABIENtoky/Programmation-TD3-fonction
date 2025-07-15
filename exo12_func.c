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
    printf ("Entrer un nombre : ");
    scanf ("%d", &n);
  } while (n < 1 || n > 50);
  
  return n;
}

void saisieElement (int m, int n, int carre[taille][taille]) {

  int i, j;
  
  printf ("Entrer les elements du carre : \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf ("carre[%d][%d] = ", i, j);
      scanf ("%d", &carre[i][j]);
    }
  }  
  
}

int estCarreMagique (int m, int n, int carre[taille][taille]) {
  
  int sommeLignes, sommeColonnes, estCarreMagique = 1;
  int i, j, k;
  int somme[taille];
  
  for(i = 0; i < m; i++){
    sommeLignes = 0;
    for(j = 0; j < n; j++){
      sommeLignes += carre[i][j];
    }
    somme[i] = sommeLignes;
  }
  
  for(j = 0; j < n; j++){
    sommeColonnes = 0;
    for(i = 0; i < m; i++){
      sommeColonnes += carre[i][j];
    }
    somme[m + j] = sommeColonnes;
  }
  
  for(i = 0; i < (m + n) - 1; i++){
    if(somme[i] != somme[i + 1]){
      estCarreMagique = 0;
      break;
    }
  }
  
  /*printf("\nsomme[] = [");
        for(i = 0; i < (m + n); i++){
        	printf("%d", somme[i]);
        		if(i < (m + n) - 1){
        			printf(", ");
        		}
        }
        printf("]\n");
  
  printf ("\n\n%d\n\n", estCarreMagique);*/
  
  return estCarreMagique;
  
}

int main () {

  int M, N;
  int carre[taille][taille];
  
  printf ("Nombre de lignes du  carre : \n");
  M = saisieTaille ();
  
  printf ("Nombre de colonnes du carre : \n");
  N = saisieTaille ();
  
  saisieElement (M, N, carre);
  
  if (estCarreMagique (M, N, carre)) {
    printf ("Oui, ce carre est magique.\n");
  } else printf("Non, ce carre n'est pas magique.\n");
  
  return 0;
}
