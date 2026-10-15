#include <stdio.h>
#include "../interfaz/racional.h"

int main() {
    int n1, d1, n2, d2;
    
    int n_res[1]; 
    int d_res[1];

    printf("Introduzca la primera fracción: ");
    scanf("%d %d", &n1, &d1);

    printf("Introduzca la segunda fracción: ");
    scanf("%d %d", &n2, &d2);

    if (d1 == 0 || d2 == 0) {
        printf("Error: Denominador 0\n");
        return 1;
    }

    sumar(n1, d1, n2, d2, n_res, d_res);

    printf("Suma simplificada: %d/%d\n", n_res[0], d_res[0]);

    return 0;
}