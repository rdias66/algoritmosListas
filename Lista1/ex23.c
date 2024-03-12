#include <stdio.h>

int main(){
    int dias;
    printf("...");
    printf("%danos  %dmeses  %ddias", dias/365, dias%365/30, dias%365%30);
    return 0;
}