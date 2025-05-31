#include <stdio.h>
#include <time.h>

int main() {
    clock_t empieza, termina;
    double tiempoenms;

    int a = 5;

    empieza = clock();

    for (int i = 0; i < 100000000; i++) {
        a = a + 1;
    }

    termina = clock();

    // Convertir a milisegundos
    tiempoenms = (double)(termina - empieza) * 1000 / CLOCKS_PER_SEC;

    printf("Resultado final: %d\n", a);
    printf("Tiempo: %.2f milisegundos\n", tiempoenms);

    return 0;
}
