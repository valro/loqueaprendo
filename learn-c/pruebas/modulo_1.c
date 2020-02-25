/*
 *prueba el modulo de un numero inferior a 10
 */
#include<stdio.h>

int main(void) {

  int num, mod;

  printf("Introduce un entero: ");
  scanf("%d", &num);

  mod = num % 10;
  
  printf("El modulo de %d es: %d\n", num, mod);

  return 0;
}
