#include <stdio.h>

int main() {
    char siswa[5][10] = {"Alice", "Bob", "Charlie", "David", "Eva"};
    int nilai[] = {85, 90, 78, 92, 88};

    int lenghtSiswa = sizeof(siswa) / sizeof(siswa[0]);

    printf("Daftar siswa dan nilai sebelum diubah:\n");
    for (int i = 0; i < lenghtSiswa; i++) {
        printf("%s: %d\n", siswa[i], nilai[i]);
    }


    //Perubahan Nilai Index Ke3
    nilai[3] = 95;

    printf("\nDaftar siswa dan nilai setelah diubah:\n");
    for (int i = 0; i < lenghtSiswa; i++) {
        printf("%s: %d\n", siswa[i], nilai[i]);
    }

    return 0;
}
