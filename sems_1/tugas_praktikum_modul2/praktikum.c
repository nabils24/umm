#include <stdio.h>

#define PI 3.14159

int main() {
    float jari_jari, luas, keliling;

    // Meminta input jari-jari dari pengguna
    printf("Program Menghitung Luas dan Keliling Lingkaran\n");
    printf("==============================================\n");
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    // Validasi input
    if (jari_jari <= 0) {
        printf("Error: Jari-jari harus lebih besar dari 0.\n");
        return 1;
    }

    // Menghitung luas lingkaran
    luas = PI * jari_jari * jari_jari;

    // Menghitung keliling lingkaran
    keliling = 2 * PI * jari_jari;

    // Menampilkan hasil perhitungan
    printf("\nHasil Perhitungan:\n");
    printf("------------------\n");
    printf("Luas lingkaran     : %.2f\n", luas);
    printf("Keliling lingkaran : %.2f\n", keliling);

    return 0;
}