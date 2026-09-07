//Ler as duas notas de um aluno e calculem a média. No final exiba a média final e o conceito final desse estudante.

#include <stdio.h>
int main() {

    float nota1, nota2, media;
    char conceito;

    printf("\nCALCULADORA DE NOTAS\n");
    printf("------------------------------\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 8.0) {
        conceito = 'A';} else if (media >= 7.0) {
        conceito = 'B';} else if (media >= 6.0) {
        conceito = 'C';} else if (media >= 5.0) {
        conceito = 'D';} else {conceito = 'E';}

    printf("------------------------------\n");
    printf("Media final: %.2f\n", media);
    printf("Conceito final: %c\n", conceito);
    printf("------------------------------\n");

    return 0;
}