#include <stdio.h>
#include <stdbool.h>


bool is_prime(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}


void find_prime_sum_decomposition(int num) {
    if (num <= 2) {
        printf("O n�mero deve ser maior que 2 e par.\n");
        return;
    }

    printf("Decomposi��o de %d como a soma de dois n�meros primos:\n", num);

    for (int i = 2; i <= num / 2; i++) {
        if (is_prime(i) && is_prime(num - i)) {
            printf("%d + %d\n", i, num - i);
            return;
        }
    }

    printf("N�o foi poss�vel encontrar uma decomposi��o.\n");
}

int main() {
    int num;

    printf("Digite um n�mero inteiro par maior que 2: ");
    scanf("%d", &num);

    find_prime_sum_decomposition(num);

    return 0;
}

