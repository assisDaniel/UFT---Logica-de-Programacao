#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int encomenda, totalenc, segmento, incentivo, maior, cont, soma, soma2, soma3, soma4, soma5, soma6, pedido;
    float media, perc, perc2, perc3;

    soma=0;
    soma2=0;
    soma3=0;
    soma4=0;
    soma6=0;
    pedido=0;
    totalenc=0;

    printf("\nInforme o número de livros encomendados: ");
    scanf("%d", &maior);
    encomenda=maior;
    while(encomenda!=-1){
        pedido++;
        cont=0;
        soma5=0;
        totalenc+=encomenda;
        while(cont<encomenda){
            cont++;
            printf("\t\t\t\nLivro %d", cont);
            printf("\nInforme o segmento do livro: \n- 0 pra Fundamental \n- 1 pra Médio \n- 2 pra Superior");
            scanf("\n%d", &segmento);
            printf("\nO livro teve incentivo fiscal ou não? Digite 0(sim) ou 1(não): ");
            scanf("%d", &incentivo);
            
            if(segmento==0){
                soma++;
            }else if(segmento==1){
                soma2++;
            }else{
                soma3++;
            }
            if (incentivo==1){
                soma4++;
            }else{
                soma5++;
            }
            if(soma5>20){
                soma6++;
            }    
        }
        printf("\n\n--------------------------------------------------------------------------------");
        printf("\nInforme o número de livros encomendados: ");
        scanf("%d", &encomenda);
        if(encomenda>maior){
            maior=encomenda;
        }
    }
    perc=(float)(soma*100)/totalenc;
    perc2=(float)(soma2*100)/totalenc;
    perc3=(float)(soma3*100)/totalenc;
    media=(float)totalenc/pedido;
    printf("\n\n------------------------------------------------------------------------------------");
    printf("\nResultados");
    printf("\nA porcentagem de livro do fundamental foi: %.1f%%", perc);
    printf("\nA porcentagem de livro do médio foi: %.1f%%", perc2);
    printf("\nA porcentagem de livro do superior foi: %.1f%%", perc3);
    printf("\nO número total de livros que não receberam incentivo fiscal foi: %d", soma4);
    printf("\nA média de livros pedidos por pedido foi: %.2f", media);
    printf("\n\"%d\" pedidos tiveram mais de 20 livros com incentivo fiscal", soma6);
    printf("\nO maior pedido foi de \"%d\" livros", maior);


}