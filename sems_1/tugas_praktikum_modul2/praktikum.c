#include <stdio.h>
#define PI 3.14159

int main() {
    float jari_jari, luas, keliling;

    // Meminta input jari-jari
    printf("====Menghitung Luas dan Keliling Lingkaran====\n");
    printf("====================Nabils24==================\n");
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari);

    // Jika Input kurang dari 0
    if (jari_jari <= 0) {
        printf("Error: Jari-jari harus lebih besar dari 0.\n");
        //Return 1 menandakan program gagal berjalan
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