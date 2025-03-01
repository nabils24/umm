#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk menulis data mahasiswa ke file
void tulisData()
{
    FILE *file;
    int jumlahMhs;
    char nama[50], nim[15], prodi[50];
    int i;

    // Check Apakah file ada dan dibuka | parameter w berguna untuk write file
    file = fopen("data_mahasiswa.txt", "w");
    if (file == NULL)
    {
        printf("File tidak dapat dibuka!\n");
        exit(1);
    }

    // Input JumlahMhs
    printf("Masukkan Jumlah Mahasiswa yang ingin ditulis : ");
    scanf("%d", &jumlahMhs);

    for (i = 0; i < jumlahMhs; i++)
    {
        printf("Masukkan data mahasiswa ke-%d:\n", i + 1);
        printf("Nama: ");
        scanf(" %[^\n]s", nama);
        printf("NIM: ");
        scanf(" %[^\n]s", nim);
        printf("Program Studi: ");
        scanf(" %[^\n]s", prodi);

        fprintf(file, "Nama: %s\n", nama);
        fprintf(file, "NIM: %s\n", nim);
        fprintf(file, "Program Studi: %s\n\n", prodi);
    }

    fclose(file);
    printf("Data mahasiswa berhasil ditulis ke file.\n");
}

// Fungsi untuk membaca data mahasiswa dari file
void bacaData()
{
    FILE *file;
    char ch;

    file = fopen("data_mahasiswa.txt", "r");
    if (file == NULL)
    {
        printf("File tidak dapat dibuka!\n");
        exit(1);
    }

    printf("\nIsi file data_mahasiswa.txt:\n");
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(file);
}

int main()
{
    int pilihan;

    do
    {
        printf("\nPilih aksi:\n");
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            tulisData();
            break;
        case 2:
            bacaData();
            break;
        case 3:
            printf("Program selesai.\n");
            break;
        default:
            printf("Pilihan tidak valid. Coba lagi.\n");
        }
    } while (pilihan != 3);

    return 0;
}
