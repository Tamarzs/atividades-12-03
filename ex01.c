#include "stdio.h"

int main(void) {
    
    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf( (idade >= 60) ? "Pode ser atendido" : "Não pode ser atendido" );
    return 0;
}