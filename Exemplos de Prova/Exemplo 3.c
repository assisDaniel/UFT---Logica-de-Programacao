#include <stdio.h>
#include <locale.h> 
#include <string.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int sacas, arroz, maisarroz, feijao, milho, cont, conteudo, org, soma, soma2, prod, maior, quest;
    float percorg, media;

    soma=0;
    soma2=0;
    prod=0;
    org=0;
    arroz=0;
    feijao=0;
    milho=0;

    printf("Informe quantas sacas foram entregues: ");
    scanf("%d", &maior);
    sacas=maior;
    while(sacas!=-1){
        prod++;
        soma+=sacas;

        maisarroz=0;
        cont=0;
        do{

            cont++;
            printf("\nInforme o conte?do da saca %d:\n\n -Digite 0 se for arroz. \n -Digite 1 se for feij?o. \n -Digite 2 se for milho. ", cont);
            scanf("%d", &conteudo);
            printf("\n\nO conte?do da saca ? org?nico? Digite 0(sim) ou 1(n?o): ");
            scanf("%d", &quest); 
            if(conteudo==0){
                arroz++;
                maisarroz++;
            }else if(conteudo==1){
                feijao++;
            }else{
                milho++;
            }
            if(maisarroz>15){
                soma2++;
            }
            if(quest==0){
                org++;
            }
        }while(cont<sacas);
        printf("------------------------------------------------------------------------------");
        printf("\nInforme quantas sacas foram entregues: ");
        scanf("%d", &sacas);
        if(sacas>maior){
            maior=sacas;
        }
    }
    percorg=(float)(org*100)/soma;
    media=(float)soma/prod;
    printf("----------------------------------------------------------------------------------");
    printf("\t\t\t\nResultados do dia\n");
    printf("\n %.1f%% das sacas receberam selo org?nico. ", percorg);
    printf("\nForam recebidas: \n- %d sacas de arroz. \n- %d sacas de feij?o. \n - %d sacas de milho.", arroz, feijao, milho);
    printf("\n\nA maior entrega do dia foi: %d sacas", maior);
    printf("\n%d produtores entregaram mais de 15 sacas de arroz", soma2);
    printf("\nA m?dia de sacas entregue por produtor foi: %.2f", media);
}