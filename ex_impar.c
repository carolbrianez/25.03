#include <stdio.h> 

int main() {
    int num;
    int soma = 0;
    
    printf ("Digite um numero: ");
    scanf ("%d", &num);
    
    for (int contador=1; contador <=num; contador++) {
        if (contador%2  == 1) {
            soma += contador;
            
        }
    }
    printf ("A soma dos numeros impares de 1 até %d e: %d\n ", num, soma);
    
    return 0;
}
   