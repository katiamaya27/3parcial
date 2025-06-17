#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tablas_sin_apuntadores() {
    int i, j;
    clock_t inicio, fin;
    double ciclos;

    inicio = clock();
    
    printf("\nTablas de multiplicar del 1 al 10:\n\n");
    for(i = 1; i <= 10; i++) {
        printf("Tabla del %d:\n", i);
        for(j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    
    fin = clock();
    ciclos = (double)(fin - inicio) / CLOCKS_PER_SEC;
    
    printf("Ciclos de reloj utilizados: %f\n", ciclos);
}

void tablas_con_apuntadores() {
    int i, j, resultado;
    int *p_i = &i, *p_j = &j, *p_resultado = &resultado;
    clock_t inicio, fin;
    double ciclos;

    inicio = clock();
    
    printf("\nTablas de multiplicar del 1 al 10:\n\n");
    for(*p_i = 1; *p_i <= 10; (*p_i)++) {
        printf("Tabla del %d:\n", *p_i);
        for(*p_j = 1; *p_j <= 10; (*p_j)++) {
            *p_resultado = (*p_i) * (*p_j);
            printf("%d x %d = %d\n", *p_i, *p_j, *p_resultado);
        }
        printf("\n");
    }
    
    fin = clock();
    ciclos = (double)(fin - inicio) / CLOCKS_PER_SEC;
    
    printf("Ciclos de reloj utilizados: %f\n", ciclos);
}

void sistema_facturacion() {
    int numero_productos, i;
    float total = 0;
    
    do {
        printf("\nIngrese el numero de productos (entre 1 y 5): ");
        scanf("%d", &numero_productos);
        
        if(numero_productos < 1 || numero_productos > 5) {
            printf("Error: Debe ingresar entre 1 y 5 productos.\n");
        }
    } while(numero_productos < 1 || numero_productos > 5);
    
    char productos[5][50];
    float precios[5];
    
    for(i = 0; i < numero_productos; i++) {
        printf("\nProducto %d:\n", i+1);
        printf("Nombre: ");
        scanf("%s", productos[i]);
        printf("Precio: ");
        scanf("%f", &precios[i]);
        total += precios[i];
    }
    
    printf("\n--- FACTURA ---\n");
    for(i = 0; i < numero_productos; i++) {
        printf("%s: $%.2f\n", productos[i], precios[i]);
    }
    printf("\nTOTAL: $%.2f\n", total);
}

int main() {
    int opcion;
    
    do {
        printf("\n--- MENÚ PRINCIPAL ---\n");
        printf("1. Tablas de multiplicar del 1 al 10 (sin apuntadores)\n");
        printf("2. Tablas de multiplicar del 1 al 10 (con apuntadores)\n");
        printf("3. Sistema de facturación\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                tablas_sin_apuntadores();
                break;
            case 2:
                tablas_con_apuntadores();
                break;
            case 3:
                sistema_facturacion();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    } while(opcion != 4);
    
    return 0;
}