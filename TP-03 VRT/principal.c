#include <stdio.h>
#include <stdlib.h>

double calcularAreaTriangulo(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
}

int main() {
    int n;

    
    FILE *arquivo = fopen("vertices.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; 
    }

    
    fscanf(arquivo, "%d", &n);

    double x, y;
    double x1, y1, x2, y2, x3, y3;
    double areaTotal = 0.0;

    
    fscanf(arquivo, "%lf %lf", &x1, &y1);
    x2 = x1;
    y2 = y1;

    
    for (int i = 2; i <= n; i++) {
        
        fscanf(arquivo, "%lf %lf", &x, &y);
        x3 = x;
        y3 = y;
        areaTotal += calcularAreaTriangulo(x1, y1, x2, y2, x3, y3);
        x2 = x3;
        y2 = y3;
    }

    
    fclose(arquivo);
    printf("A area do poligono e: %.2lf\n", areaTotal);

    return 0;
}
