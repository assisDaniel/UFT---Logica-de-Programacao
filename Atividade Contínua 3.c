#include <stdio.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL, "Portuguese");
  float temp, indice, media1, media2, soma1, soma2;
  int cont, cont2;
  char quest;

  cont=0;
  cont2=0;
  soma1=0;
  soma2=0;
  
  printf("\t\t\t�ndice Pluviom�trico");
  while(cont<=11){
    cont++;
    printf("\n\t\tM�s %i",cont);
    
    printf("\nInforme o �ndice pluviom�trico do m�s em (mm): ");
    scanf("%f", &indice);
    
    soma1+=indice;
  }
  printf("\n\n\t\t\tTemperatura");
  do{
    cont2++;
    printf("\nInforme a temperatura registrada em �C: ");
    scanf("%f", &temp);
    soma2+= temp;

    printf("\nDeseja registrar mais alguma medi��o? Digite s ou n: ");
    scanf(" %c", &quest);
  }while(quest!='n');
  
  media1= (float)soma1/cont;
  media2= (float)soma2/cont2;
  
  printf("\n\n\t\t\t\tResultado: \n");
  printf("\nA m�dia anual de temperatura foi %.2f", media2);
  printf("\nA m�dia anual de �ndice pluviom�trico foi %.2f", media1);
}