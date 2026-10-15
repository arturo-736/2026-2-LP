#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } 
    else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } 
    else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    return 0;
}

int main() {
    int resultado = ackermann(3, 4);
    printf("Ackermann(3, 4) = %d\n", resultado);
    return 0;
}