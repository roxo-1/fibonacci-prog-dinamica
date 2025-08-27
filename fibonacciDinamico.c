#include <stdio.h>

// Definimos o tamanho do array para armazenar os valores
#define MAX 100

// Contador global para rastrear as chamadas da função
long long chamadas_memo = 0;
int memo[MAX];

int F_memo(int n) {
    chamadas_memo++; // O contador é incrementado a cada chamada
    
    if (n <= 1) {
        return n;
    }
    
    // Se o valor já foi calculado, retorna ele
    if (memo[n] != 0) {
        return memo[n];
    }
    
    // Calcula o valor, armazena no array e retorna
    memo[n] = F_memo(n - 1) + F_memo(n - 2);
    return memo[n];
}

int main() {
    int num = 40;
    for (int i = 0; i < MAX; i++) {
        memo[i] = 0;
    }
    int resultado = F_memo(num);
    printf("O 40º termo de Fibonacci é: %d\n", resultado);
    printf("Número de chamadas da função: %lld\n", chamadas_memo);
    return 0;
}