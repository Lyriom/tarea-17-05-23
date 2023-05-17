#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas;
    printf("Ingrese el numero de filas de la matriz:\n");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: \n");
    scanf("%d", &columnas);

    // Crear la matriz
    int matriz1[filas][columnas];

    // Inicializar la matriz con ceros
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz1[i][j] = 0;
        }
    }
     // Establecer la diagonal principal en 1
    for (int i = 0; i < filas; i++) {
        matriz1[i][i] = 1;
    }