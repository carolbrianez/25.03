#include <stdio.h>

int main(void) {
    char modo;

    printf("Digite o modo desejado:\n1: Secar\n2: Enxaguar e secar\n3: Todos\n0: para encerrar\n");
    scanf(" %c", &modo);
    printf("%c", modo);

    while (modo != '0') {
        switch (modo) {
            case '1':
                printf("Secando...\n");
                break;
            case '2':
                printf("Enxaguando e secando...\n");
                break;
            case '3':
                printf("Ciclo completo...\n");
                break;
        }
        printf("\nDigite outro modo ou 0 para encerrar: ");
        scanf(" %c", &modo);
    }

    printf("Programa encerrado.\n");
    return 0;
}