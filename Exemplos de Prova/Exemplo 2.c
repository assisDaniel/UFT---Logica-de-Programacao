#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float freqcard, maior, peso, pesofinal, mediap, soma, perc;
    int idade, cont, cont2, cont3, soma2, soma3, soma4, soma5;

    cont=0;
    soma2=0;
    soma3=0;
    soma4=0;
    soma5=0;
    
    while(cont<=0){
        cont++;
        printf("-------------------------------");
        printf("\t\t\t\nFuncionário %d", cont);
        printf("\n\nInforme a sua idade: ");
        scanf("%d", &idade);

        printf("\nInforme a frequência cardíaca em bpm: ");
        scanf("%f", &maior);
        cont2=0;
        do{
            cont2++;
            printf("\nInforme a frequência cardíaca em bpm: ");
            scanf("%f", &freqcard);

            if(freqcard>maior){
                maior=freqcard;
            }
        }while(cont2<=4);
        if(maior>105){
            soma2++;
        }

        printf("\nInforme seu peso (kg): ");
        scanf("%f", &peso);
        soma=0;
        cont3=0;
        while(peso!=-1){
            printf("\nInforme seu peso (kg): ");
            cont3++;
            soma+=peso;
            pesofinal=peso;
            scanf("%f", &peso);
        }

        mediap= (float)soma/cont3;
        if(mediap>pesofinal){
            soma3++;
        }else if(mediap<pesofinal){
            soma4++;
        }else{
            soma5++;
        }
       
        printf("\nO peso médio desse funcionário foi: %.2f", mediap);
        printf("\nA maior frequência cardíaca registrada foi: %.2f", maior);
    }
    perc=(float)(soma2*100)/cont;
    printf("\nA percentagem de funcionários que tiveram a sua maior frequência cardíaca superior a 105 bpm foi: %.1f%%", perc);
    printf("\n%d tiveram o peso médio maior que o peso final.", soma3);
    printf("\n%d tiveram o peso médio menor que o peso final.", soma4);
    printf("\n%d tiveram o peso médio igual o peso final.", soma5);

}