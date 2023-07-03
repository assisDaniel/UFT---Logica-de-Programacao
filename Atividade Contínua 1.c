#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  float salm, horat, horae, vhorat, vhorae, salb, salhe, salr;

  printf("Diga o valor do salário mínimo:");
  scanf("%f", &salm);
  printf("Quantas horas você trabalhou?");
  scanf("%f", &horat);
  printf("Quantas horas extras você fez?");
  scanf("%f", &horae);

  vhorat= salm/8;
  vhorae= salm/4;
  salb= horat * vhorat;
  salhe= horae * vhorae;
  salr= salb + salhe;

  printf("\nO salário que você receberá esse mês é: R$ %.2f", salr);
}
