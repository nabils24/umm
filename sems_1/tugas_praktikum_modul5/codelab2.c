#include <stdio.h>

int main()
{
   
    int penjualan[2][3] = { //2 Baris, 3 Kolom
        {5, 8, 6}, // Penjualan di Toko 1 (Produk A, B, C)
        {3, 7, 9}  // Penjualan di Toko 2 (Produk A, B, C)
    };

    int lenghtProduk = sizeof(penjualan) / sizeof(penjualan[0][0]);
    int lenghtToko = sizeof(penjualan) / sizeof(penjualan[0]);

    // Array untuk menyimpan total penjualan setiap produk
    int totalPenjualan[3] = {0, 0, 0}; // Total penjualan produk A, B, C | 3 Kolom

    //Mengetahui total penjualan setiap produk
    for (int produk = 0; produk < lenghtProduk; produk++)
    {   
        //Mengetahui total penjualan setiap toko
        for (int toko = 0; toko < lenghtToko; toko++)
        {
            totalPenjualan[produk] += penjualan[toko][produk];
        }
    }

    printf("Total penjualan untuk setiap produk:\n");
    printf("Produk A: %d\n", totalPenjualan[0]);
    printf("Produk B: %d\n", totalPenjualan[1]);
    printf("Produk C: %d\n", totalPenjualan[2]);

    return 0;
}
