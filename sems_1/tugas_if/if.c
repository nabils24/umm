#include <stdio.h>

int main() {
    int angka1 = 1;
    int angka2 = 3;

    // Pengecek Lebih besar mana angka kedua diatas
    if (angka1 > angka2) {
        printf("Angka %d lebih besar dari Angka %d\n", angka1, angka2);
    } else if (angka1 < angka2) {
        printf("Angka %d lebih besar dari Angka %d\n", angka2, angka1);
    } else {
        printf("Angka keduanya sama :D\n");
    }

    return 0;
}
