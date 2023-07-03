#include <stdio.h>
#include <stdlib.h>

void main(){
    int idade[50], soma, cont=0, cont2=0, cont3=0, maior=0, percen;
    float media;


    for (cont=0; cont<=49; cont++){
        printf("Informe sua idade: ");
        scanf("%d", &idade[cont]);

        soma+= idade[cont];

        if(idade[cont]> maior){
            maior= idade[cont];
        }

    }

    media= (float)soma/50;

    for (cont=0; cont<=49; cont++){
        if(idade[cont]< media){
            cont2++;
        }
        if(idade[cont]< 18){
            cont3++;
        }
    }

    percen=(cont3*100)/50;

    printf("\nA media foi: %.2f", media);
    printf("\nO numero de pessoas com idade menor que a media geral foi: %d", cont2);
    printf("\nA porcentagem de menores de idade informados foi: %d%%", percen);
    printf("\nA idade do mais velho foi: %d", maior);
    
}