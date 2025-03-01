#include <stdio.h>
// Nama : Nabil Sahsada Suratno
// Nim : 202410370110357
// Tugas : 5.2
int main() {
    int kondisi;
    printf("Masukkan kondisi saklar (0 untuk OFF, 1 untuk ON): ");
    scanf("%d", &kondisi);
    if (kondisi == 0) {
        printf("Lampu OFF\n");
    } else if (kondisi == 1) {
        printf("Lampu ON\n");
    } else {
        printf("Input tidak valid.\n");
    }
    return 0;
}