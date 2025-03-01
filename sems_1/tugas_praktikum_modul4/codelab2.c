#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Array untuk menyimpan string
    int i, j;
    int found;

    // Meminta pengguna untuk memasukkan string
    printf("Masukkan sebuah string: ");
    scanf("%s", str); // Menggunakan scanf untuk membaca string

    // Menghapus newline jika ada
    str[strcspn(str, "\n")] = 0;

    printf("Karakter unik dalam string: ");

    for (i = 0; i < strlen(str); i++) {
        found = 0; // Reset found setiap kali memeriksa karakter baru

        // Loop untuk memeriksa apakah karakter sudah muncul sebelumnya
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                found = 1; 
                break; // Keluar dari loop 
            }
        }

        //Jika ada
        if (found) {
            continue;
        }

        //Kalau Blm ada karakter unik
        printf("%c ", str[i]);
    }

    printf("\n");
    return 0;
}