#include <stdio.h>
// Nama : Nabil Sahsada Suratno
// Nim : 202410370110357
// Tugas : 3.1

int main() {
    // a. 2 + 3 * 5
    int hasil_a = 2 + 3 * 5;
    printf("Hasil a: %d\n", hasil_a);

    // b. 10 - 7 + 3 % 6
    int hasil_b = 10 - 7 + 3 % 6;
    printf("Hasil b: %d\n", hasil_b);

    // c. 3 % 7 / 2 - 1
    int hasil_c = 3 % 7 / 2 - 1;
    printf("Hasil c: %d\n", hasil_c);

    // d. 5 * 3 / 6 % 7
    int hasil_d = 5 * 3 / 6 % 7;
    printf("Hasil d: %d\n", hasil_d);

    // e. 3 * 2++ - 4 * 7
    int e = 2;
    int hasil_e = 3 * e++ - 4 * 7; // menggunakan post-increment
    printf("Hasil e: %d\n", hasil_e);

    // f. 6 << 2
    int hasil_f = 6 << 2;
    printf("Hasil f: %d\n", hasil_f);

    // g. 12 >> 3
    int hasil_g = 12 >> 3;
    printf("Hasil g: %d\n", hasil_g);

    return 0;
}
