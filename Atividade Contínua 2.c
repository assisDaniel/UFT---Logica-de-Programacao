#include <stdio.h>
#include <locale.h>

void main() {
  setlocale(LC_ALL, "Portuguese");
  int faltaAr, desacord;
  float temp;

  printf("Digite 0(n�o apresenta o sintoma) ou 1(apresenta o sintoma) para os sintomas do paciente:\n\n");
  printf("Paciente tem falta de ar?\n");
  scanf("%i", &faltaAr);
  printf("Paciente est� desacordado?\n");
  scanf("%i", &desacord);
  printf("Qual a temperatura do paciente em �C?\n");
  scanf("%f", &temp);
  
  if(temp>37.5){
    printf("Paciente deve fazer um exame de sangue e urina.\n");
  }
  else if(35<=temp){
    printf("Paciente deve fazer uma consulta com o cl�nico geral.\n");
  }
  if(faltaAr==1){
    printf("Paciente deve fazer uma tomografia do pulm�o.\n");
  }
  if(temp<35||desacord==1){
    printf("Paciente deve ser encaminhado para a emerg�ncia!\n");
  }
}