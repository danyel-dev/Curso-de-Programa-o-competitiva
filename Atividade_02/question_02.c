#include <stdio.h>

int main() {
    int qtd=5, par[qtd], auxPar = 0, impar[qtd], auxImpar = 0, i, n;

    for(i = 0; i < 15; i++) {
        scanf("%d", &n);

        if(n % 2 == 0) {
            par[auxPar] = n;
            auxPar++;

            if(auxPar == qtd) {
                auxPar = 0;

                for(auxPar = 0; auxPar < qtd; auxImpar++) {
                    printf("par[%d] = %d\n", auxPar, par[auxPar]);
                    par[auxPar] = 0; 
                }

                auxPar = 0;
            }
        } else {
            impar[auxImpar] = n;
            auxImpar++;

            if(auxImpar == qtd) {
                auxImpar = 0;

                for(auxImpar = 0; auxImpar < qtd; auxImpar++) {
                    printf("Impar[%d] = %d\n", auxImpar, impar[auxImpar]);
                    impar[auxImpar] = 0; 
                }
            }
        }
    }

    for(i = 0; impar[i] != 0; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for(i = 0; par[i] != 0; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
}
