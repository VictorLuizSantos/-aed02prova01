#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void entrada03(int *compra, int *pagamento){
    printf("\nDigite o valor da compra: \n");
    scanf ("%d", compra);

    printf("\nDigite o valor do pagamento: \n");
    scanf ("%d", pagamento);
}

void processamento03(int *compra, int *pagamento, int *n1, int *n10, int *n100){
    if (*pagamento < *compra) {
        *compra = 0;
    }
    else {
        *n100 = (*pagamento - *compra) / 100;
        *n10 = ((*pagamento - *compra) % 100) / 10;
        *n1 = (*pagamento - *compra) % 10;
    }
}

void saida03(int *compra, int *n1, int *n10, int *n100){
    if (*compra == 0) {
        printf("\nPagamento Negado!\n");
    }
    else {
        printf("Troco em notas de 100: %d\n", *n100);
        printf("Troco em notas de 10: %d\n", *n10);
        printf("Troco em notas de 1: %d\n", *n1);
    }

}

void questao03(){
    int compra, pagamento, n1, n10, n100;

    entrada03(&compra, &pagamento);
    processamento03(&compra, &pagamento, &n100, &n10, &n1);
    saida03(&compra, &n100, &n10, &n1);
}
