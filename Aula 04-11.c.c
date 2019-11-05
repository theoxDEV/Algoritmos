#include <stdio.h>

int main(void){

int numero[4];

for (numero[0] = 0; numero[0] <= 100; numero[0]++){
    printf("Numero em for: %d\n", numero[0]);
}
    numero[1] = 0;
while (numero[1] <= 100){
    printf("Numero em while: %d\n", numero[1]);
    numero[1]++;
}

do {
    printf("Numero em do while: %d\n", numero[2]);
    numero[2]++;
}
    while (numero[2] <= 100);

    numero [3] = 100;
do {
    printf("Numero de 99 contando 100: %d\n", numero[3]);
    numero[3]--;
}
    while (numero[3] >= 0 && numero[3] <=99);

return 0;
}

