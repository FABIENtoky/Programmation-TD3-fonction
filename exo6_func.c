#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define taille 50

void palindrome (char chaine[]) {
  
  int debut, fin;
  
  debut = 0;
  fin = strlen(chaine) - 1;
  
  while((debut < fin) && (chaine[debut] == chaine[fin])){
    debut = debut + 1;
    fin = fin - 1;
  }
  
  if(debut >= fin){
    printf("Oui, %s est un palindrome.\n", chaine);
  } else printf("Non, %s n'est pas un palindrome.\n", chaine);
  
}

int main () {
  
  char mot[taille];
  
  printf ("Entrer un mot : ");
  scanf ("%s", mot);
  
  palindrome (mot);
  
  return 0;  
  
}
