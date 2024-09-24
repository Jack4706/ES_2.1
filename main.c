#include <stdio.h>

int main() {

    float a, b;

    printf("inserisci due numeri: \n");
    scanf("%f %f",&a, &b);

    float media = (a + b) / 2;

    printf("la media e':  %.2f", media);

    return 0;
}