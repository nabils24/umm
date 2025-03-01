#include <stdio.h>
// Nama : Nabil Sahsada Suratno
// Nim : 202410370110357
// Tugas : 5.3
int main() {
    float tinggi_air;
    printf("Masukkan tinggi air (dalam meter): ");
    scanf("%f", &tinggi_air);
    if (tinggi_air <= 500.0) {
        printf("Status: AMAN\n");
    } else if (tinggi_air <= 600.0) {
        printf("Status: WASPADA\n");
    } else if (tinggi_air <= 650.0) {
        printf("Status: SIAGA 2\n");
    } else {
        printf("Status: SIAGA 1\n");
    }
    return 0;
}