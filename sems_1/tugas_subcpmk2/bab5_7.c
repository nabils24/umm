#include <stdio.h>

int main() {
    int jam, menit, detik;
    printf("Masukkan waktu (hh:mm:ss): ");
    scanf("%d:%d:%d", &jam, &menit, &detik);
    if (jam >= 0 && jam < 24 && menit >= 0 && menit < 60 && detik >= 0 && detik < 60) {
        printf("Waktu valid\n");
    } else {
        printf("Waktu tidak valid\n");
    }
    return 0;
}