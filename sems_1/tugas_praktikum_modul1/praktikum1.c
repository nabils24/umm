#include <stdio.h>

/// Nama:Nabil Sahsada Suratno
/// Nim:202410370110357
/// Kelas:H

int main() {
    // Pengenalan Program
    printf("--- Penghitung Nilai Akhir  ---\n\n");

    // Variabel untuk menyimpan input pengguna
    char nama[50], nim[20];
    float nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

    // Mengambil input
    printf("Masukkan Nama Mahasiswa: ");
    gets(nama); // Fungsi gets() digunakan untuk mengambil input string dengan spasi
    printf("Masukkan NIM Mahasiswa: ");
    gets(nim);
    
    printf("Masukkan Nilai Tugas (0-100): ");
    scanf("%f", &nilai_tugas);
    printf("Masukkan Nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);
    printf("Masukkan Nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);

    // Menghitung nilai akhir berdasarkan persentase
    // Aritmatikanya adalah (Nilai Tugas x 0.20) + (Nilai UTS x 0.35) + (nilai uas x 0.45)
    nilai_akhir = (nilai_tugas * 0.20) + (nilai_uts * 0.35) + (nilai_uas * 0.45);

    // Menampilkan hasil perhitungan
    printf("\n--------------------------------------------------\n");
    printf("Nama Mahasiswa   : %s\n", nama);
    printf("NIM Mahasiswa    : %s\n", nim);
    printf("Nilai Tugas      : %f\n", nilai_tugas);
    printf("Nilai UTS        : %f\n", nilai_uts);
    printf("Nilai UAS        : %f\n", nilai_uas);
    printf("Nilai Akhir      : %f\n", nilai_akhir);
    printf("--------------------------------------------------\n");

    return 0;
}
