#include <stdio.h>

/// Nama:Nabil Sahsada Suratno
/// Nim:202410370110357
/// Kelas:H

int main()
{
    char nama[50];
    int umur;
    float gaji_pokok;

    printf("Masukkan nama: ");
    //Mengganti gets ke fgets tetapi fgets butuh 3 argumen yaitu tujuan variable, ukuran yang akan dimasukkan, inputan(stdin)
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan umur: ");
    // Penambahan & untuk menerima dan memasukkan variable umur
    scanf("%d", &umur);

    printf("Masukkan gaji pokok: ");
    // Penambahan & untuk menerima dan memasukkan variable gaji_pokok
    scanf("%f", &gaji_pokok);

    float tunjangan = gaji_pokok * 0.1;
    float total_gaji = gaji_pokok + tunjangan;

    printf("Nama: %s", nama);  // fgets() menyimpan newline, jadi tidak perlu \n
    printf("Umur: %d\n", umur);
    printf("Gaji Pokok: %.2f\n", gaji_pokok);
    printf("Tunjangan: %.2f\n", tunjangan);
    printf("Total Gaji: %.2f\n", total_gaji);

    return 0;
}