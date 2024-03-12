#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    else
        return mdc(b, a % b);
}

int mmc(int a, int b) {
    return a * b / mdc(a, b);
}

int main() {
    int num1, denum1, num2, denum2;
    printf("Informe duas frações no formato a/b c/d: ");
    scanf("%d/%d %d/%d", &num1, &denum1, &num2, &denum2);
    int numSum = num1 * denum2 + num2 * denum1;
    int denumSum = denum1 * denum2;
    int numMul = num1 * num2;
    int denumMul = denum1 * denum2;
    int m = mdc(numSum, denumSum);
    numSum /= m;
    denumSum /= m;
    m = mdc(numMul, denumMul);
    numMul /= m;
    denumMul /= m;
    printf("Soma: %d/%d\n", numSum, denumSum);
    printf("Produto: %d/%d\n", numMul, denumMul);
    return 0;
}