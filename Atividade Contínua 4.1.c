#include <locale.h>
#include <stdio.h>

void main() {
  setlocale(LC_ALL, "Portuguese");
  int menor, numero, cont;

  printf("\nInforme um n�mero: ");
  scanf("%i", &menor);

  cont = 0;
  do {
    cont++;
    printf("\nInforme outro n�mero: ");
    scanf("%i", &numero);

    if (menor > numero) {
      menor = numero;
    }
  } while (cont <= 8);
  printf("\nO menor n�mero informado foi: %i", menor);
}