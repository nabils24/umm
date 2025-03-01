#include <stdio.h>
// Nama : Nabil Sahsada Suratno
// Nim : 202410370110357
// Tugas : 5.6
int main() {
    int angka;
    printf("Masukkan angka 4 digit: ");
    scanf("%d", &angka);
    if (angka % 4 == 0 && angka % 5 == 0) {
        printf("Angka valid\n");
    } else {
        printf("Angka tidak valid\n");
    }
    return 0;
}