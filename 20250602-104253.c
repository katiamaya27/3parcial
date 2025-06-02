#include <stdio.h>

int main() {
    int x;
    int *A;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    A = (int *)malloc(x * 4);

    if (A == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < x; i++) {
        printf("Ingrese el valor para el elemento %d: ", i);
        scanf("%d", (A + i));
    }

    printf("Valores ingresados:\n");
    for (int i = 0; i < x; i++) {
        printf("Elemento %d: %d\n", i, *(A + i));
    }

    free(A);
    return 0;
}