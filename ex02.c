#include "stdio.h"

int main(void) {
    int x;
    int y;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    
    printf("Digite o segundo número: ");
    scanf("%d", &y);
    
    printf("Maior: %d", (x>y) ? x : y);
    return 0;
}