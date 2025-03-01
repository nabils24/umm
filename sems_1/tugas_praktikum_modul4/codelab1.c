#include <stdio.h>

int main() {
    int angka;
    int total = 0;
    int jumlah_angka = 0;  

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    while (angka >= 0) {
        total += angka; 
        jumlah_angka++;
    
        printf("Masukkan angka lain: ");
        scanf("%d", &angka);
    }

    printf("Total akhir: %d\n", total);

    if (jumlah_angka > 0) {
        float rata_rata = (float)total / jumlah_angka;
        printf("Rata-rata: %.2f\n", rata_rata);
    } else {
        printf("Tidak ada angka positif yang dimasukkan.\n");
    }

    return 0;
}
