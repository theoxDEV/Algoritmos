#include <stdio.h>

int main()
{
    int multiplicador = 1;
    int input_usuario;
    int produto = 0;

    printf("Informe o multiplicando: ");
    scanf("%d", &input_usuario);
    
    while(multiplicador <= 10) {
    	produto = input_usuario * multiplicador;
        printf("Tabuada de %d: %d X %d = ", input_usuario, input_usuario, multiplicador, produto);
        multiplicador++;
    }
    return 0;
}
