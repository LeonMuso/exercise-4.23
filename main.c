#include <stdio.h>
#include <math.h>
int main(void) {
    int y, x;
    printf("inserisci il valore di y:");
    scanf("%d", &y);
    for (x = 1; pow(x, x) < y; x++) {}
    printf("%d\n" , x - 1);
}
