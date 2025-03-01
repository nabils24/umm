#include <stdio.h>

int hitungFaktorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * hitungFaktorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int angka, i;

    // Menghitung faktorial
    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angka);
    printf("Faktorial dari %d adalah: %d\n", angka, hitungFaktorial(angka));

    // Menghasilkan deret Fibonacci
    printf("Masukkan angka untuk menghasilkan deret Fibonacci: ");
    scanf("%d", &angka);
    printf("Deret Fibonacci hingga suku ke-%d adalah: ", angka);
    for (i = 0; i < angka; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
