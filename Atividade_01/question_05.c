#include <stdio.h>

int main() {
    int number;
    float real;
    char caractere;
    char phrase[50];
    scanf("%i %f %c %[^\n]s", &number, &real, &caractere, phrase);
    printf("%i%.6f%c%s\n", number, real, caractere, phrase);
    printf("%i\t%.6f\t%c\t%s\n", number, real, caractere, phrase);
    printf("%10i%10.6f%10c%10s\n", number, real, caractere, phrase);
    return 0;
}
