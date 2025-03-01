#include <stdio.h>

/// Nama:Nabil Sahsada Suratno
/// Nim:202410370110357
/// Kelas:H

int main()
{
    int a, b;
    printf("Masukkan dua angka: ");
    // Penambahan & untuk menerima variable a dan b
    scanf("%d %d", &a, &b);

    // Aritmatika Perjumlahan
    int sum = a + b;
    printf("Penjumlahan: %d\n", sum);

    //
    int difference = a - b;
    printf("Pengurangan: %d\n", difference);

    int product = a * b;
    printf("Perkalian: %d\n", product);

    if (b != 0)
    {
        // mengganti type data menjadi float agar lebih akurat untuk pembagiannya
        float division = (float)a / b;
        printf("Pembagian: %.2f\n", division);
    }
    else
    {
        printf("Error: Pembagian dengan nol\n");
    }

    return 0;
}