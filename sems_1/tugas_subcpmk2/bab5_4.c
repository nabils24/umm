#include <stdio.h>
// Nama : Nabil Sahsada Suratno
// Nim : 202410370110357
// Tugas : 5.4
int main() {
    char huruf;
    printf("Masukkan sebuah huruf: ");
    scanf(" %c", &huruf);
    if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u' ||
        huruf == 'A' || huruf == 'E' || huruf == 'I' || huruf == 'O' || huruf == 'U') {
        printf("Huruf %c adalah huruf vokal.\n", huruf);
    } else {
        printf("Huruf %c adalah huruf konsonan.\n", huruf);
    }
    return 0;
}