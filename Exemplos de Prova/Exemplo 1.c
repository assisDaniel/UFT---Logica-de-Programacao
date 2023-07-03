#include <locale.h>
#include <stdio.h>

void main(){
  setlocale(LC_ALL,"Portuguese");
  float nvloxi, freqcard, media, soma, soma2, soma3, maior, percidade,percidade2;
  int idade, cont, cont2, cont3, soma4;

  soma2 = 0;
  soma3 = 0;
  soma4 = 0;
  cont = 0;

  while (cont <= 0) {
    cont++;
    printf("------------------------------");
    printf("\nAtleta %d", cont);
    printf("\n\nInforme sua idade: ");
    scanf("%d", &idade);
    
    cont2=0;
    soma=0;
    printf("\nInforme o n�vel de oxig�nio no sangue: ");
    scanf("%f", &nvloxi);
    do {
      cont2++;
      printf("\nInforme o n�vel de oxig�nio no sangue: ");
      soma += nvloxi;

      scanf("%f", &nvloxi);
    } while (nvloxi != -1);

    printf("\nInforme a frequ�ncia card�aca: ");
    scanf("%f", &maior);
    
    cont3=0;
    while (cont3 <= 6) {
      cont3++;
      printf("\nInforme a frequ�ncia cardiaca: ");
      scanf("%f", &freqcard);

      if (freqcard > maior) {
        maior = freqcard;
      }
    }

    if (idade > 25) {
      soma2++;
    } else if (idade < 16) {
      soma3++;
    }

    media = (float)soma / cont2;
    if (media < 96) {
      soma4++;
    }
    printf("\n\nO n�vel m�dia de oxig�nio no sangue foi: %.2f", media);
    printf("\nA maior frequ�ncia card�aca registrada foi: %.2f", maior);
  }
  percidade = (float)(soma2 * 100) / cont;
  percidade2 = (float)(soma3 * 100) / cont;
  
  printf("\n%d atletas tiveram a m�dia de oxig�nio no sangue menor que 96. ", soma4);
  printf("\nA percentagem de atletas com mais de 25 anos foi: %.1f%%", 
 percidade);
  printf("\nA percentagem de atletas com menos de 16 anos foi: %.1f%%",
 percidade2);
}
