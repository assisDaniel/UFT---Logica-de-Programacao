#include <stdio.h>
#include <stdlib.h>

void main(){
    int dia, mes, posto, vacinas[5][20][4], soma;


    soma=0;
    for(mes=0; mes<=3; mes++){
        for(dia=0; dia<=19; dia++){
            soma+=vacinas[2][dia][mes];
        }
    }

    soma=0;
    for(posto=0; posto<=4; posto++){
        for(dia=0; dia<=19; dia++){
            soma+=vacinas[posto][dia][0];
        }
    }

    soma=0;
    for(posto=0; posto<=4; posto++){
        for(mes=0; mes<=3; mes++){
            soma+=vacinas[posto][0][mes];
        }
    }


}