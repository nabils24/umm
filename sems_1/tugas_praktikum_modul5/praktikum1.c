#include <stdio.h>
#include <string.h>

int main() {
    int jumlahBuah;
    char buah[10][50]; // Maksimal 10 buah, masing-masing maksimal 50 karakter
    char temp[50];     // Variabel sorting

    // Meminta jumlah buah dari pengguna
    printf("Masukkan jumlah buah (maksimal 10): ");
    scanf("%d", &jumlahBuah);
    getchar(); // Membersihkan newline character setelah scanf

    // Memasukkan nama-nama buah
    for (int i = 0; i < jumlahBuah; i++) {
        printf("Masukkan nama buah ke-%d: ", i + 1);
        fgets(buah[i], sizeof(buah[i]), stdin);
        buah[i][strcspn(buah[i], "\n")] = '\0'; // Menghapus newline di akhir input
    }

    // Menampilkan buah dalam urutan yang diinputkan
    printf("\nNama buah dalam urutan yang diinputkan:\n");
    for (int i = 0; i < jumlahBuah; i++) {
        printf("%s\n", buah[i]);
    }

    // Mengurutkan buah secara abjad (bubble sort)
    for (int i = 0; i < jumlahBuah - 1; i++) {
        for (int j = i + 1; j < jumlahBuah; j++) {
            if (strcmp(buah[i], buah[j]) > 0) {
                // Tukar buah[i] dan buah[j]
                strcpy(temp, buah[i]);
                strcpy(buah[i], buah[j]);
                strcpy(buah[j], temp);
            }
        }
    }

    // Menampilkan buah dalam urutan abjad
    printf("\nNama buah dalam urutan abjad:\n");
    for (int i = 0; i < jumlahBuah; i++) {
        printf("%s\n", buah[i]);
    }

    return 0;
}
