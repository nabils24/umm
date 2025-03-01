#include <stdio.h>

int main() {
    char karakter1, karakter2;
    printf("Masukkan 2 karakter: ");
    scanf(" %c %c", &karakter1, &karakter2);
    if ((karakter1 == 'a' && karakter2 == 'b') || (karakter1 == 'b' && karakter2 == 'a')) {
        printf("Silahkan masuk.\n");
    } else {
        printf("Identifikasi gagal.\n");
    }
    return 0;
}