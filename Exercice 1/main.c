#include <stdio.h>
#include "operation/operation.h"

int main() {
    int (*operations[4])(int, int) = {addition, soustraction, multiplication, division};
    char *operation_names[4] = {"Addition", "Soustraction", "Multiplication", "Division"};
    int choice, a, b;



    printf("Choisissez une opération :\n");
    printf("0 - Addition\n");
    printf("1 - Soustraction\n");
    printf("2 - Multiplication\n");
    printf("3 - Division\n");
    printf("Votre choix : ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 3) {
        printf("Choix invalide\n");
        return 1;
    }

    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    int result = operations[choice](a, b);
    printf("%s de %d et %d donne : %d\n", operation_names[choice], a, b, result);

    return 0;
}
