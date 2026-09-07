//Usando a estrutura while(), escreva um programa na Linguagem C que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve terminar quando for lido um número negativo.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    while (1) {
        system("cls");
        printf("\nCONTAGEM DE NUMEROS POR INTERVALO\n");
        printf("------------------------------\n");
        printf("(%i numeros foram digitados ate o momento)\n", intervalo1 + intervalo2 + intervalo3 + intervalo4);
        printf("(digite um numero negativo para encerrar)\n");
        printf("\nDigite os numeros: ", intervalo1 + intervalo2 + intervalo3 + intervalo4);
        scanf("%i", &numero);
        if (numero < 0) {
            break;
        } else if (numero <= 25) {
            intervalo1++;
        } else if (numero <= 50) {
            intervalo2++;
        } else if (numero <= 75) {
            intervalo3++;
        } else if (numero <= 100) {
            intervalo4++;
        }
    }

    system("cls");
    printf("\nCONTAGEM DE NUMEROS POR INTERVALO:\n");
    printf("------------------------------------------------\n");
    printf("Quantidade de numeros no intervalo [0-25]  : %2i\n", intervalo1);
    printf("Quantidade de numeros no intervalo [26-50] : %2i\n", intervalo2);
    printf("Quantidade de numeros no intervalo [51-75] : %2i\n", intervalo3);
    printf("Quantidade de numeros no intervalo [76-100]: %2i\n", intervalo4);
    printf("------------------------------------------------\n");

    return 0;
}
