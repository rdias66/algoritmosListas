#include <stdio.h>

int main() {
    int a, b;
    printf("...");
    scanf("%d %d", &a, &b); //coleta
    a = a+b; //troca os valores sem uma terceira variavel utilizando um metodo de operações inversas(tbm funciona com * e /)
    b = a-b;
    a = a-b;
    printf("%d %d", a,b);
    return 0;
}