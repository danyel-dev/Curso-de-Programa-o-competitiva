#include <stdio.h>

int main() {
    int n=20, v[n], i, aux;

    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < n/2; i++) {
        aux = v[i];
        v[i] = v[(n - 1) - i];
        v[(n - 1) - i] = aux;
    }

    for(i = 0; i < n; i++) {
        printf("N[%d] = %d\n", i, v[i]);
    }
}
