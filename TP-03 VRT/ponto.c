#include "ponto.h"
#include <stdlib.h>
#include <math.h>

Ponto* criarPonto(double x, double y) {
    Ponto* ponto = malloc(sizeof(Ponto));
    if (ponto == NULL) {
        return NULL; // Falha na alocação de memória
    }
    ponto->x = x;
    ponto->y = y;
    return ponto;
}

void destruirPonto(Ponto* ponto) {
    free(ponto);
}

// Função para calcular a área de um triângulo dado três pontos
double calcularAreaTriangulo(const double x1, const double y1, const double x2, const double y2, const double x3, const double y3) {
    return fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}
