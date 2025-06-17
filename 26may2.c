#include <stdio.h>
#include <stdlib.h> 

int main() {
    int x;
    int* A; 

    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("El tamaño debe ser mayor que 0.\n");
        return 1;
    }

    while (getchar() != '\n');

    A = (int*)malloc(x * sizeof(int));
    if (A == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    
    for (int i = 0; i < x; i++) {
        printf("Ingresa el valor para la posición %d: ", i);
        scanf("%d", A + i);

        
        while (getchar() != '\n');
    }

    printf("Los valores ingresados son:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", *(A + i));
    }
    printf("\n");

    free(A);

    return 0;
}