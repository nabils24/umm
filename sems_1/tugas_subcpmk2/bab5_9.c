#include <stdio.h>
#include <string.h>

int main() {
    char kode[5];
    printf("Masukkan kode 4 karakter: ");
    scanf("%4s", kode);
    if (strcmp(kode, "abcd") == 0) {
        printf("Proses berhasil.\n");
    } else {
        printf("Masukkan kode lagi.\n");
    }
    return 0;
}