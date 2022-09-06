#include <stdio.h>

int main() {
    int l, c;
    scanf("%i %i", &l, &c);
    if ((l >= 1 && l <= 1000) && (c >= 1 && c <= 1000)) {
        if ((l + c) % 2 == 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
}
