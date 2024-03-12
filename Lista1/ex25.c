#include <stdio.h>

int main() {
    int seg;
    printf("...");
    scanf("%d", seg);
    printf("%dhoras  %dminutos %dsegundos", seg/3600, seg%3600/60, seg%3600%60);
}