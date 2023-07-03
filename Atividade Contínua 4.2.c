#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  int idade, cont, soma;
  float media, quest;

  cont=0;
  soma=0;
  printf("Informe a sua idade: ");
  scanf("%i", &idade);

  do{
    cont++;
    printf("\nInforme a sua idade:");

    soma= soma+idade;
    scanf("%i", &idade);
  }while(idade != -2);

  media= (float)soma/cont;
  printf("\nA média das idades foi %.2f.", media);
}