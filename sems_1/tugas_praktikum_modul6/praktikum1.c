#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "produk_toko.txt"
#define MAX_LENGTH 100

// Struktur data untuk produk
typedef struct {
    char id[MAX_LENGTH];
    char nama[MAX_LENGTH];
    char kategori[MAX_LENGTH];
    float harga;
    int stok;
} Produk;

// Fungsi untuk menambah produk baru
// Fungsi Tambah Produk
void tambahProduk() {
    Produk produk;
    FILE *file;

    // Membuka file untuk menambahkan produk
    file = fopen("produk_toko.txt", "a");
    if (file == NULL) {
        printf("Error: Tidak bisa membuka file!\n");
        return;
    }

    printf("Masukkan ID produk: ");
    scanf("%s", produk.id);

    // Membersihkan buffer sebelum membaca nama produk
    while (getchar() != '\n'); 

    printf("Masukkan nama produk: ");
    fgets(produk.nama, sizeof(produk.nama), stdin);
    produk.nama[strcspn(produk.nama, "\n")] = '\0'; // Menghapus newline dari fgets

    printf("Masukkan kategori produk: ");
    fgets(produk.kategori, sizeof(produk.kategori), stdin);
    produk.kategori[strcspn(produk.kategori, "\n")] = '\0'; // Menghapus newline dari fgets

    printf("Masukkan harga produk: ");
    scanf("%f", &produk.harga);

    printf("Masukkan stok produk: ");
    scanf("%d", &produk.stok);

    // Menyimpan data ke file
    fprintf(file, "%s|%s|%s|%.2f|%d\n", produk.id, produk.nama, produk.kategori, produk.harga, produk.stok);
    fclose(file);

    printf("Produk berhasil ditambahkan!\n");
}

// Fungsi untuk menampilkan daftar produk
void tampilkanProduk() {
    FILE *file;
    char buffer[256]; // Buffer untuk membaca satu baris
    int count = 0;

    // Membuka file untuk membaca
    file = fopen("produk_toko.txt", "r");
    if (file == NULL) {
        printf("Error: Tidak bisa membuka file!\n");
        return;
    }

    printf("\nDaftar Produk:\n");
    printf("---------------------------------------------------------\n");
    printf("ID\tNama\t\tKategori\tHarga\t\tStok\n");
    printf("---------------------------------------------------------\n");

    // Membaca file baris per baris
    while (fgets(buffer, sizeof(buffer), file)) {
        char id[10], nama[50], kategori[30];
        float harga;
        int stok;

        // Memisahkan data berdasarkan delimiter '|'
        if (sscanf(buffer, "%[^|]|%[^|]|%[^|]|%f|%d", id, nama, kategori, &harga, &stok) == 5) {
            printf("%s\t%-15s%-15s%.2f\t\t%d\n", id, nama, kategori, harga, stok);
            count++;
        } else {
            printf("Peringatan: Format data tidak valid: %s", buffer);
        }
    }

    fclose(file);

    if (count == 0) {
        printf("Tidak ada produk yang terdaftar.\n");
    }
}

// Fungsi untuk mengupdate informasi produk
void updateProduk() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("Error membuka file!\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error membuat file sementara!\n");
        fclose(file);
        return;
    }

    char id[MAX_LENGTH];
    int found = 0;
    printf("Masukkan ID produk yang ingin diupdate: ");
    scanf("%s", id);

    char buffer[256];
    Produk produk;

    // Membaca file baris per baris
    while (fgets(buffer, sizeof(buffer), file)) {
        // Memisahkan data berdasarkan delimiter '|'
        if (sscanf(buffer, "%[^|]|%[^|]|%[^|]|%f|%d", produk.id, produk.nama, produk.kategori, &produk.harga, &produk.stok) == 5) {
            if (strcmp(produk.id, id) == 0) {
                found = 1;
                printf("Masukkan nama baru: ");
                while (getchar() != '\n'); // Membersihkan buffer
                fgets(produk.nama, sizeof(produk.nama), stdin);
                produk.nama[strcspn(produk.nama, "\n")] = '\0'; // Menghapus newline

                printf("Masukkan kategori baru: ");
                fgets(produk.kategori, sizeof(produk.kategori), stdin);
                produk.kategori[strcspn(produk.kategori, "\n")] = '\0';

                printf("Masukkan harga baru: ");
                scanf("%f", &produk.harga);

                printf("Masukkan stok baru: ");
                scanf("%d", &produk.stok);
            }
            // Menulis data (terupdate atau tidak) ke file sementara
            fprintf(tempFile, "%s|%s|%s|%.2f|%d\n", produk.id, produk.nama, produk.kategori, produk.harga, produk.stok);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);

    if (found) {
        printf("Produk berhasil diupdate!\n");
    } else {
        printf("Produk dengan ID %s tidak ditemukan!\n", id);
    }
}


// Fungsi untuk menghapus produk
void hapusProduk() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("Error membuka file!\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error membuat file sementara!\n");
        fclose(file);
        return;
    }

    char id[MAX_LENGTH];
    int found = 0;
    printf("Masukkan ID produk yang ingin dihapus: ");
    scanf("%s", id);

    char buffer[256];
    Produk produk;

    // Membaca file baris per baris
    while (fgets(buffer, sizeof(buffer), file)) {
        // Memisahkan data berdasarkan delimiter '|'
        if (sscanf(buffer, "%[^|]|%[^|]|%[^|]|%f|%d", produk.id, produk.nama, produk.kategori, &produk.harga, &produk.stok) == 5) {
            if (strcmp(produk.id, id) != 0) {
                // Menulis data ke file sementara jika ID tidak cocok
                fprintf(tempFile, "%s|%s|%s|%.2f|%d\n", produk.id, produk.nama, produk.kategori, produk.harga, produk.stok);
            } else {
                found = 1;
            }
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);

    if (found) {
        printf("Produk berhasil dihapus!\n");
    } else {
        printf("Produk dengan ID %s tidak ditemukan!\n", id);
    }
}

// Fungsi utama
int main() {
    int pilihan;

    printf("Selamat datang di program Manajemen Toko Elektronik!\n\n");

    do {
        printf("Menu:\n");
        printf("1. Tambah Produk Baru\n");
        printf("2. Tampilkan Daftar Produk\n");
        printf("3. Update Informasi Produk\n");
        printf("4. Hapus Produk\n");
        printf("5. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahProduk();
                break;
            case 2:
                tampilkanProduk();
                break;
            case 3:
                updateProduk();
                break;
            case 4:
                hapusProduk();
                break;
            case 5:
                printf("Terima kasih telah menggunakan program ini!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }

        printf("\n");
    } while (pilihan != 5);

    return 0;
}
