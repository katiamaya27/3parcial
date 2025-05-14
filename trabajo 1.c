#include <stdio.h>
#include <time.h>

int main() {
    clock_t start = clock();

    long long suma = 0;
    for (int i = 1; i <= 1000000; ++i) {
        suma += i;
    }

    clock_t end = clock();
    double tiempo_ms = 1000.0 * (end - start) / CLOCKS_PER_SEC;

    printf("Resultado de la suma: %lld\n", suma);
    printf("Tiempo de ejecución (ms): %.3f\n", tiempo_ms);

    return 0;
}