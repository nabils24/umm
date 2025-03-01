#include <stdio.h>
#include <conio.h>

// Nama : Nabil Sahsada Suratno
// Nim : 202410370110357
// Tugas : 4.3

int main() {
    int angka;

    printf("Masukkan angka desimal : ");
    scanf("%d", &angka);
    printf("Nilai yang dimasukkan : %d \n", angka);

    printf("Masukkan angka oktal : ");
    scanf("%o", &angka);
    printf("Nilai yang dimasukkan: %o (desimal : %d) \n", angka, angka);

    printf("Masukkan angka heksadesimal: ");
    scanf("%x", &angka);
    printf("Nilai yang dimasukkan: %x (desimal : %d) \n", angka, angka);

    return 0;
}