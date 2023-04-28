#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada01(int *raio){
    printf("\nDigite o tamanho do raio: \n");
    scanf ("%d", raio);
}

void processamento01(int *raio, float *diametro, float *perimetro, float *area, float *volume){
    *diametro = 2.0 * *raio;
    *perimetro = 2.0 * 3.14 * *raio;
    *area = 3.14 * (*raio * *raio);
    *volume = 4.0 / 3.0 * 3.14 * (*raio * *raio * *raio);
}

void saida01(float *diametro, float *perimetro, float *area, float *volume){
    printf("\nValor do diametro: %.2f\n", *diametro);
    printf("\nValor do perimetro: %.2f\n", *perimetro);
    printf("\nValor da area: %.2f\n", *area);
    printf("\nValor do volume: %.2f\n", *volume);
}

void questao01(){
    int raio;
    float diametro, perimetro, area, volume;

    entrada01(&raio);
    processamento01(&raio, &diametro, &perimetro, &area, &volume);
    saida01(&diametro, &perimetro, &area, &volume);
}
