#include <stdio.h>
#include <string.h>
#define taille 100

void cryptage (char phrase[], char phraseCryptee[]) {
  
  int i, j;
  
  j = 0;
  for (i = 0; i < (strlen (phrase) - 1); i++) {
    phraseCryptee[j] = phrase[i];
    j++;
    if ((phrase[i] != 'a' && phrase[i] != 'e' && phrase[i] != 'i' && phrase[i] != 'o' && phrase[i] != 'u' && phrase[i] != 'y') && (phrase[i + 1] == 'a' || phrase[i + 1] == 'e' || phrase[i + 1] == 'i' || phrase[i + 1] == 'o' || phrase[i + 1] == 'u' || phrase[i + 1] == 'y')) {
      phraseCryptee[j] = 'I';
      j++;
      phraseCryptee[j] = 'T';
      j++;
    }
  }
  
  phraseCryptee[j] = '\0';
  
  printf("Phrase cryptee : %s.\n", phraseCryptee);
  
}

int main () {
  
  char phrase[taille], phraseCryptee[taille + 100];
  
  printf ("Entrer une phrase en francais : ");
  fgets (phrase, sizeof (phrase), stdin);
  cryptage (phrase, phraseCryptee);
  
  return 0;  
  
}
