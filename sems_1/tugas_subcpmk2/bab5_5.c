#include <stdio.h>
// Nama : Nabil Sahsada Suratno
// Nim : 202410370110357
// Tugas : 5.5
int main() {
    int day, month, year;
    printf("Masukkan tanggal (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &day, &month, &year);
    const char *months[] = {"", "Januari", "Februari", "Maret", "April", "Mei", "Juni", 
                            "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    printf("%d %s %d\n", day, months[month], year);
    return 0;
}