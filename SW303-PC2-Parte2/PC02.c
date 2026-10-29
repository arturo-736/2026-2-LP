#include <stdlib.h>
#include <string.h>

char *concatenar(const char *a, const char *b) {
    if (a == NULL || b == NULL) {
        return NULL;
    }
    size_t len_a =strlen(a);
    size_t len_b =strlen(b);
    
    char *resultado = (char *)malloc(len_a + len_b + 1);
    if (resultado == NULL){
        return NULL;
    }  
    strcpy(resultado, a);
    strcpy(resultado + len_a, b);
    return resultado;
}

char *concatenar_n(const char *a, const char *b, size_t n) {
    if (a == NULL || b == NULL){
        return NULL
    };
    
    size_t len_a = strlen(a);
    size_t len_b = strlen(b);
    size_t extra = 0;

    if(n < len_b){
        extra = n;
    }else {extra = len_b} ;
    
    char *resultado = (char *)malloc(len_a + extra + 1);
    if (resultado == NULL) {
        return NULL;
    }
    
    strcpy(resultado, a);
    strncpy(resultado + len_a, b, extra);
    *(resultado + len_a + extra) = '\0';
    
    return resultado;
}


int main() {
    char a[50];
    char b[50];
    
    printf("Ingrese la primera cadena: ");
    if (fgets(a, sizeof(a), stdin) != NULL) {
        size_t len = strlen(a);
        if (len > 0 && a[len - 1] == '\n') {
            a[len - 1] = '\0';
        }
    } else {
        a[0] = '\0';
    }
    
    printf("Ingrese la segunda cadena: ");
    if (fgets(b, sizeof(b), stdin) != NULL) {
        size_t len = strlen(b);
        if (len > 0 && b[len - 1] == '\n') {
            b[len - 1] = '\0';
        }
    } else {
        b[0] = '\0';
    }
    
    char *comb1 = concatenar(a, b);
    if (comb1 != NULL) {
        printf("%s\n", comb1);
        free(comb1);
    }

    printf("Ingrese el valor de n: ");
    if (scanf("%zu", &n) != 1) {
        n = 0;
    }
    
    char *comb2 = concatenar_n(a, b, n);
    if (comb2 != NULL) {
        printf("%s\n", comb2);
        free(comb2);
    }
    
    return 0;
}