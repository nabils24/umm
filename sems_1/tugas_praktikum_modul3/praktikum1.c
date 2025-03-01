#include <stdio.h>

// Enum untuk Film
enum Film
{
    Venom = 1,
    PeeMak,
    AttaGledek,
    IPMan,
    Fufufafa
};

// Enum untuk Jenis Tiket
enum JenisTiket
{
    Economy = 1,
    Business,
    VIP
};

int main()
{
    int pilihanFilm, pilihanTiket, member; //  Deklarasi variabel inputan pilihanUser

    float hargaFilm, hargaTiket, totalHarga, uangDibayar; // Deklarasi  variabel untuk menghitung totalHarga dan uangDibayar

    float *ptrTotalHarga = &totalHarga; // Pointer untuk alamat memori total harga

    // Dashboard untuk pilihan film dan tiket
    printf("===== Sistem Pemesanan Tiket Bioskop =====\n");
    printf("Pilihan Film:\n");
    printf("1. Venom - Rp.50000\n2. PeeMak - Rp.60000\n3. AttaGledek - Rp.55000\n4. IPMan - Rp.70000\n5. Fufufafa - Rp.65000\n");
    printf("Pilih nomor film (1-5): ");
    scanf("%d", &pilihanFilm);

    // Menentukan harga berdasarkan film yang dipilih
    switch (pilihanFilm)
    {
    case Venom:
        hargaFilm = 50000;
        break;
    case PeeMak:
        hargaFilm = 60000;
        break;
    case AttaGledek:
        hargaFilm = 55000;
        break;
    case IPMan:
        hargaFilm = 70000;
        break;
    case Fufufafa:
        hargaFilm = 65000;
        break;
    default:
        printf("Pilihan film tidak valid.\n");
        return 1;
    }

    // Pilihan jenis tiket
    printf("Pilihan Jenis Tiket:\n");
    printf("1. Economy - Rp.30000\n2. Business - Rp.50000\n3. VIP -  Rp.100000\n");

    printf("Pilih nomor jenis tiket (1-3): ");
    scanf("%d", &pilihanTiket);

    // Menentukan harga berdasarkan jenis tiket yang dipilih
    switch (pilihanTiket)
    {
    case Economy:
        hargaTiket = 30000;
        break;
    case Business:
        hargaTiket = 50000;
        break;
    case VIP:
        hargaTiket = 100000;
        break;
    default:
        printf("Pilihan tiket tidak valid.\n");
        return 1;
    }

    // Menanyakan apakah pelanggan adalah member
    printf("Apakah Anda member? (1 = Ya, 0 = Tidak): ");
    scanf("%d", &member);

    // Menghitung total harga dan memberikan diskon jika member
    totalHarga = hargaFilm + hargaTiket;
    if (member == 1)
    {
        totalHarga *= 0.9; // Diskon 10% untuk member
    }


    // Menampilkan total harga dan alamat memori dari total harga
    printf("Total harga tiket: Rp %.2f\n", totalHarga);
    printf("Alamat memori dari total harga: %p\n", &ptrTotalHarga);

    // Meminta pelanggan untuk memasukkan uang yang dibayarkan
    printf("Masukkan jumlah uang yang dibayarkan: Rp ");
    scanf("%f", &uangDibayar);

    // Mengecek apakah uang yang dibayarkan cukup
    if (uangDibayar > totalHarga)
    {
        printf("Kembalian Anda: Rp %.2f\n", uangDibayar - totalHarga);
    }
    else if (uangDibayar < totalHarga)
    {
        printf("Uang yang Anda berikan kurang.\n");
    }
    else
    {
        printf("Terima kasih, pembayaran Anda pas.\n");
    }

    return 0;
}
