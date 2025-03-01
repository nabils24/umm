#include <stdio.h>

int main() {
    int jumlahMahasiswa;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    // Deklarasi array untuk menyimpan nilai
    float nilai[jumlahMahasiswa][3]; // [Mahasiswa][Mata kuliah]
    float rataMataKuliah[3] = {0};   // Untuk rata-rata Matematika, Fisika, Kimia
    float rataKeseluruhan = 0;       // Untuk rata-rata keseluruhan

    // Input nilai untuk setiap mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("\nMasukkan nilai untuk mahasiswa ke-%d:\n", i + 1);
        printf("Matematika: ");
        scanf("%f", &nilai[i][0]);
        printf("Fisika: ");
        scanf("%f", &nilai[i][1]);
        printf("Kimia: ");
        scanf("%f", &nilai[i][2]);
    }

    // Menghitung rata-rata untuk setiap mata kuliah dan keseluruhan
    for (int i = 0; i < jumlahMahasiswa; i++) {
        for (int j = 0; j < 3; j++) {
            rataMataKuliah[j] += nilai[i][j];
        }
    }

    for (int j = 0; j < 3; j++) {
        rataMataKuliah[j] /= jumlahMahasiswa; // Rata-rata per mata kuliah
        rataKeseluruhan += rataMataKuliah[j]; // Menambahkan ke rata-rata keseluruhan
    }
    rataKeseluruhan /= 3; // Rata-rata keseluruhan

    // Menampilkan data dalam bentuk tabel
    printf("\nData Nilai Ujian:\n");
    printf("No\tMatematika\tFisika\t\tKimia\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", i + 1, nilai[i][0], nilai[i][1], nilai[i][2]);
    }

    // Menampilkan rata-rata
    printf("\nRata-rata Nilai:\n");
    printf("Matematika: %.2f\n", rataMataKuliah[0]);
    printf("Fisika: %.2f\n", rataMataKuliah[1]);
    printf("Kimia: %.2f\n", rataMataKuliah[2]);
    printf("Rata-rata keseluruhan: %.2f\n", rataKeseluruhan);

    return 0;
}
