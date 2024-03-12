#include <stdio.h>

int main(){
    int anos, meses, dias;
    printf("...");
    scanf("%d %d %d", &anos, &meses, &dias);
    printf("%d",anos*365+meses*30+dias);
    return 0;
}