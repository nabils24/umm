#include <stdio.h>

// Mendefinisikan enum 
enum KelasTiket {
    Economy = 1,
    Business,
    FirstClass
};

int main() {
    int pilihan;
    int harga;

    printf("Pilih Kelas Tiket:\n");
    printf("1. Economy\n");
    printf("2. Business\n");
    printf("3. First Class\n");
    printf("Masukkan pilihan (1-3): ");
    scanf("%d", &pilihan);

    // Percabangan 
    harga = (pilihan == Economy) ? 200 :
            (pilihan == Business) ? 500 :
            (pilihan == FirstClass) ? 1000 : -1;

    // Menampilkan hasil atau pesan kesalahan
    if (harga != -1) {
        printf("Harga tiket: $%d\n", harga);
    } else {
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}
