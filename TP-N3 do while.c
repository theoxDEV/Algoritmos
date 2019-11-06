#include <stdio.h>

int main()
{
    int multiplicador = 1;
    int input_usuario;
    int produto;
    
    printf("Informe o multiplicando: ");
    scanf("%d", &input_usuario);
    
    do {
        produto = input_usuario * multiplicador;
        printf("Tabuada de %d: %d X %d = %d\n", input_usuario, input_usuario, multiplicador, produto);
        multiplicador++;
    }
    while(multiplicador <= 10);
    
    return 0;
}
