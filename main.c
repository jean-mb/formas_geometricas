#include "formas.h"

int main() {
    int opc;
    printf("Qual forma vc deseja ver?");
    printf("1 - Triangulo \n");
    printf("2 - Quadrado \n");
    printf("3 - Retangulo \n");
    printf("\n - Digite sua opção: ");
    scanf("%d",&opc);
    switch(opc){
        case 1:
            triangulo();
            break;
        case 2:
            quadrado();
            break;
        case 3:
            retangulo();
            break;
        default:
            printf("Nao ha essa opcao");
            break;
    }
    return 0;

}
