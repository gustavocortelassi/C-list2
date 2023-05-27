// Faça um programa que determine o mostre os cinco primeiros múltiplos 
// de 3, considerando números maiores que 0.

#include <stdio.h>

int main() {
  int cont = 0, numero = 1; 

  while(cont < 5){ // verifica se esta entre os 5 primeiros
    if(numero % 3 == 0){   // verifica se eh multiplo 
      printf("%i\n", numero); 
      cont++; 
    }
    numero++; 
  }

  return 0;
}
