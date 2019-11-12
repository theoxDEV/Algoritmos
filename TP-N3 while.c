#include <stdio.h>

int validacao_INPUT(int input_usuario){
    printf("Informe o multiplicando: ");
    scanf("%d", &input_usuario);
        while(input_usuario < 1 || input_usuario > 10){
            printf("Valor inválido, informe outro valor: ");
            scanf("%d", &input_usuario);
    }
    return input_usuario;
}

int main()
{
    int multiplicador = 1;
    int input_usuario;
    int produto = 0;
    int input;
    
    input = validacao_INPUT(input_usuario);
    
    while(multiplicador <= 10) {
    	produto = input * multiplicador;
        printf("Tabuada de %d: %d X %d = %d\n", input, input, multiplicador, produto);
        multiplicador++;
    }
    return 0;
}
