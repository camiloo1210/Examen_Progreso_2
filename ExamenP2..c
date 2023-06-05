#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar números aleatorios en un rango dado los valores de minimo y maximo deberan ser calibrados posteriormente
int generarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}