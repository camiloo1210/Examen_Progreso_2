#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar números aleatorios en un rango dado los valores de minimo y maximo deberan ser calibrados posteriormente
int generarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Función para imprimir una matriz
void imprimirMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    srand(time(0)); // Inicializar la semilla para generar números pseudo aleatorios
    int numMatrices=1;
    int filas=23;
    int columnas=3;
    int*** matriz = (int***)malloc(numMatrices * sizeof(int**));
    for (int i = 0; i < numMatrices; i++) {
        matriz[i] = (int**)malloc(filas * sizeof(int*));
        for (int j = 0; j < filas; j++) {
            printf("Alumno # %i",j);
            matriz[i][j] = (int*)malloc(columnas * sizeof(int));
            for (int k = 0; k < columnas; k++) {
                matriz[i][j][k] = generarNumeroAleatorio(1, 10);//Aqui sabe que el valor minimo es 1 y 10 el maximo y se generan los valores a partir de la funcion generar numero aleatorio
            }
        }
    }
    // Imprimir las matrices generadas
    printf("Matrices generada con los valores aleatorios:\n");
    for (int i = 0; i < numMatrices; i++) {
        imprimirMatriz(matriz[i], filas, columnas);
    }

    int** matrizResultado = (int**)malloc(filas * sizeof(int*));
    for (int i = 0; i < filas; i++) {
        matrizResultado[i] = (int*)malloc(columnas * sizeof(int));
    }

    return 0;
}


    