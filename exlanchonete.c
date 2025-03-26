#include <stdio.h>

int main() {
    char opcao;
    int batata= 0, hamburguer= 0, suco =0, combo= 0;
    float total = 0;
    float totalv = 0;
    
    printf ("Digite qual o seu pedido: ");
    printf ("\nB= Batata: R$ 10,00\n");
    printf ("H= Hambuguer: R$ 15,00\n");
    printf ("S= Suco: R$ 9,00\n");
    printf ("C= Combo: R$ 30,00\n");
    printf ("Para encerrar o pedido digite X\n");
    
    
    while (opcao != 'X') {
        scanf (" %c", &opcao);
        switch (opcao) {
            case 'B':
            batata++;
            total+= 10.00;
                break;
            case 'H':
            hamburguer++;
            total+= 15.00;
                break;
            case 'S':
            suco++;
            total+= 9.00;
                break;
            case 'C':
            combo++;
            total+= 30.00;
                break;
            }
    }
            printf("Batata: %d Hamburguer: %d Suco: %d Combo: %d" , batata, hamburguer, suco, combo);
            totalv = batata+hamburguer+suco+combo;
            printf ("\nTotal de itens vendidos: %.2f", totalv);
            
            total = batata*10 + hamburguer*15 + suco*9 +combo*30;
            printf ("\nRelatório de vendas: R$ %.2f", total);
        return 0;       
}