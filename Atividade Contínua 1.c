#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  float salm, horat, horae, vhorat, vhorae, salb, salhe, salr;

  printf("Diga o valor do sal�rio m�nimo:");
  scanf("%f", &salm);
  printf("Quantas horas voc� trabalhou?");
  scanf("%f", &horat);
  printf("Quantas horas extras voc� fez?");
  scanf("%f", &horae);

  vhorat= salm/8;
  vhorae= salm/4;
  salb= horat * vhorat;
  salhe= horae * vhorae;
  salr= salb + salhe;

  printf("\nO sal�rio que voc� receber� esse m�s �: R$ %.2f", salr);
}
