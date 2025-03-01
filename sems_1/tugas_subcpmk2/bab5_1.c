#include <stdio.h>
// Nama : Nabil Sahsada Suratno
// Nim : 202410370110357
// Tugas : 5.1
int main() {
    int a, b;
    printf("Masukkan angka pertama: ");
    scanf("%d", &a);
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);
    if (a > b) {
        printf("Bilangan terbesar adalah: %d\n", a);
    } else {
        printf("Bilangan terbesar adalah: %d\n", b);
    }
    return 0;
}