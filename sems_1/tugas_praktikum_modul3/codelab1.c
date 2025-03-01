#include <stdio.h>

int main()
{
    int umur;

    printf("=============== Program Validasi Umur ===============\n");
    printf("Nama: Nabil Sahsada Suratno\n");
    printf("NIM : 202410370110357\n");
    printf("=====================================================\n");
    printf("Masukkan umur penumpang (dalam tahun): ");
    scanf("%d", &umur);

     if (umur >= 0 && umur <= 120) {
        // 
        const char *pesan = (umur < 2) ? "Penumpang mendapatkan tiket gratis.\n"
                           : (umur <= 12) ? "Harga tiket untuk penumpang anak-anak adalah 50%% dari harga normal.\n"
                           : (umur <= 60) ? "Harga tiket untuk penumpang dewasa adalah harga normal.\n"
                           : "Harga tiket untuk penumpang lanjut usia adalah 75%% dari harga normal.\n";

        printf("%s", pesan);
    } else {
        printf("Input tidak valid. Umur harus berada dalam rentang 0 hingga 120.\n");
    }

    return 0;
}
