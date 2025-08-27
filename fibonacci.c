#include <stdio.h>

int F(int n)
{
	if(n<1) return 0;
	else if(n==1) return 1;
	else return F(n-1) + F(n-2);
}

int main() {
    int num = 10;
    int resultado = F(num);
    printf("O resultado é: %d\n", resultado);

    return 0;
}