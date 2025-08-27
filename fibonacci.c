#include <stdio.h>
long long chamadas = 0;

int F(int n)
{
    chamadas++;
	if(n<1) return 0;
	else if(n==1) return 1;
	else return F(n-1) + F(n-2);
}

int main() {
    int num = 40;
    int resultado = F(num);
    printf("O resultado é: %d\n", resultado);
    printf("Número de chamadas da função: %lld\n", chamadas);

    return 0;
}