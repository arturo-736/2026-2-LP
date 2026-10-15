#include <stdio.h>

int ackerman(int m, int n) {
   
    static int llamadas = 0;
    
    if (m < 0) {
        return llamadas;
    }
    
    llamadas++; 

    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackerman(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackerman(m - 1, ackerman(m, n - 1));
    }
    return 0;
}

int main() {
    int resultado = ackerman(3, 4);
    int cont_llamadas = ackerman(-1, 0);
    
    printf("Ackermann(3, 4) = %d\n", resultado);
    printf("Contador de llamadas: %d\n", cont_llamadas);
    return 0;
}