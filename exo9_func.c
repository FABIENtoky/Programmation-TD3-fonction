#include <stdio.h>
#include <string.h>
#define taille 50

int carre (int longueur, char chaine[]) {
  
  int moitie, i, estCarre;
  
  if (longueur % 2 != 0) {
    return 0;
  } else {
    moitie = longueur / 2;
    for (i = 0; i < moitie; i++) {
      if (chaine[i] == chaine[moitie + i]) {
        estCarre = 1;
      }
    }
  }
  
  return estCarre;
  
}

int main () {
  
  char chaine[taille];
  
  printf ("Entrer une chaine de caracteres : ");
  scanf ("%s", chaine);
  
  if (carre (strlen (chaine), chaine)) {
    printf ("La chaine '%s' est un carre.\n", chaine);
  } else printf ("La chaine '%s' n'est pas un carre.\n", chaine);
  
  return 0;  
  
}
