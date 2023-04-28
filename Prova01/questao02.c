#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entrada02(float *bruto){
    printf("\nDigite o salario bruto: \n");
    scanf ("%f", bruto);
}

void processamento02(float *bruto, float *liquido){
    if (*bruto < 2000) {
        *liquido = *bruto * 0.9;
    }
    else {
        *liquido = *bruto * 0.8;
    }

}

void saida02(float *liquido){
    printf("\nValor do salario liquido: %.2f\n", *liquido);
}

void questao02(){
    float bruto, liquido;

    entrada02(&bruto);
    processamento02(&bruto, &liquido);
    saida02(&liquido);
}
