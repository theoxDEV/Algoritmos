#include <stdio.h>

int main()
{
    int multiplicador = 1;
    int input_usuario;
    int produto = 0;
    
    printf("Informe o multiplicando: ");
    scanf("%d", &input_usuario);
    
    for(multiplicador; multiplicador <= 10; multiplicador++){
        produto = input_usuario * multiplicador;
        printf("Tabuada de %d: %d X %d = %d\n", input_usuario, input_usuario, multiplicador, produto);
    }
    
    return 0;
}
