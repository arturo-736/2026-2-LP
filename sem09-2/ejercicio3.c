#ibclude <stdio.h>
int main (void){
    long long numeros[5] = {10, 20, 30, 40,50};
    char *ptr = numeros;
    for(ptr = numeros; ptr < numeros + 5; ptr ++){
        pritnf ("Valor %ld, direccion %p \n", *ptr, ptr);
    }


    return 0;
}