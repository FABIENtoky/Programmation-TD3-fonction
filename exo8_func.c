#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define taille 50

int occurrenceBigramme (char chaine[], char bigramme[]) {
  
  int i = 0, compteur = 0;
  
  do{
    if((chaine[i] == bigramme[1]) && (chaine[i + 1] == bigramme[2])){
      compteur++;
    }
    i++;
  }while(i < strlen (chaine));
  
  return compteur;
  
}

int main () {
  
  char chaine[taille], bigramme[3];
  int i = 0;
  
  printf ("Entrer la chaine de caracteres : ");
    scanf ("%s", chaine);
    
  printf ("Entrer le bigramme : ");
  for (i = 0; i < 3; i++) {
    scanf ("%c", &bigramme[i]);
    if (bigramme[i] == '\n') {
      bigramme[i] = '\0';
    }
  }
  
  printf("Le nombre d'occurrences du bigramme est %d.\n", occurrenceBigramme (chaine, bigramme));
  
  return 0;
  
}
