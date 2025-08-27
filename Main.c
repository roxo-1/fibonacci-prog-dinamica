#include <stdio.h>
#include <time.h>

// Sua função
int F(int n) {
    if (n < 1) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return F(n - 1) + F(n - 2);
    }
}

int main() {
    int num = 40;
    int resultado = F(num);
    printf("O resultado é: %d\n", resultado);

    return 0;
}