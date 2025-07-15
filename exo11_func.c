#include <stdio.h>
#include <string.h>
#define taille 200

void decryptage (char phraseCryptee[], char phrase[]) {
  
  int i, j;
  
  j = 0;
  for (i = 0; i < (strlen (phraseCryptee) - 1); i++) {
    if ((phraseCryptee[i] == 'I') && (phraseCryptee[i + 1] == 'T')) {
      i = i + 2;
      phrase[j] = phraseCryptee[i];
      j++;
    } else {
      phrase[j] = phraseCryptee[i];
      j++;
    }
  }

  phrase[j] = '\0';

  printf ("%s.\n", phrase);
  
}

int main () {

  char phrase[taille], phraseCryptee[taille];
  
  printf("Entrez la phrase cryptee : ");
  fgets(phraseCryptee, sizeof(phraseCryptee), stdin);
  
  decryptage (phraseCryptee, phrase);

  return 0;

}
