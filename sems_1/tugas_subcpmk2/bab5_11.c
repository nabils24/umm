#include <stdio.h>
#include <string.h>

int main() {
    char kode1[4], kode2[4];
    printf("Masukkan kode 1: ");
    scanf("%3s", kode1);
    printf("Masukkan kode 2: ");
    scanf("%3s", kode2);
    if (strcmp(kode1, kode2) == 0) {
        printf("Karakter dikenali.\n");
    } else {
        printf("Karakter tidak dikenali.\n");
    }
    return 0;
}