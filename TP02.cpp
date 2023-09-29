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
        printf("O número deve ser maior que 2.\n");
        return;
    }

    printf("Decomposição de %d como a soma de dois números primos:\n", num);

    for (int i = 2; i <= num / 2; i++) {
        if (is_prime(i) && is_prime(num - i)) {
            printf("%d + %d\n", i, num - i);
            return;
        }
    }

    printf("Não foi possível encontrar uma decomposição.\n");
}

int main() {
    int num;

    printf("Digite um número inteiro maior que 2: ");
    scanf("%d", &num);

    find_prime_sum_decomposition(num);

    return 0;
}

