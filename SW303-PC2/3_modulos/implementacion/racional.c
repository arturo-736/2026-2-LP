#include "../interfaz/racional.h"
#include <stdlib.h>

static int primo(int n) {
    n = abs(n);
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int mcd(int a, int b) {
    if (b == 0) {
        return abs(a);
    }
    return mcd(b, a % b);
}

void simplificar(int num[], int den[]) {
    if (primo(num[0]) && primo(den[0]) && abs(num[0]) != abs(den[0])) {
        // Fracción irreducible
    } else {
        int divisor = mcd(num[0], den[0]);
        if (divisor != 0) {
            num[0] /= divisor; 
            den[0] /= divisor;
        }
    }

    if (den[0] < 0) {
        num[0] = -num[0];
        den[0] = -den[0];
    }
}

void sumar(int n1, int d1, int n2, int d2, int n_res[], int d_res[]) {

    n_res[0] = n1 * d2 + n2 * d1;
    d_res[0] = d1 * d2;

    simplificar(n_res, d_res);
}