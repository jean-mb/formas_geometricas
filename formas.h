#include <stdio.h>
#include <stdlib.h>

void quadrado(){
    int lado;
    printf(" - Digite o tamanho: ");
    scanf("%d", &lado);
    for (int i = 0; i < lado; i++) {
        for (int a = 0; a < lado; a++) {
            printf(" *");
        }
        printf("\n");
     }
    return;
}

void retangulo(){
    int lado;
    int base;
    printf(" - Digite o tamanho da altura: ");
    scanf("%d", &lado);

    printf(" - Digite o tamanho da base: ");
    scanf("%d", &base);
    for (int i = 0; i < lado; i++) {
        for (int a = 0; a < base; a++) {
            printf(" *");
        }
        printf("\n");
     }
    return;
}

void triangulo(){
    int tamanho;
    printf(" - Digite o tamanho da base: ");
    scanf("%d", &tamanho);
    for (int i = 0; i <= tamanho; i++){
        for (int base = 0; base < tamanho - i; base++){ // Conta os espacos para caber o triangulo.
            printf(" ");
        }
        for (int lado = 0; lado < i; lado++){
            printf(" *");
        }
        printf("\n");
    }
    printf("\n");
    return;
}
