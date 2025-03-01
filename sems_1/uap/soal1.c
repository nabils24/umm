#include <stdio.h>

int main()
{   

    // definisi kan variable
    int angka = 0; // type data integer | angka
    int digitCount = 0; // type data integer | digitCount
    do {
        //Membuat inputan dari user
        printf("Masukan Nilai Angka Bulat Positif: "); //Mencetak tulisan untuk masukan Angka..
        scanf("%d", &angka);//Menerima inputan dari user dan dimasukan ke variable angka
        
        // Pengkondisian jika angka bukan positif 
        if (angka < 0) {
            printf("Silakan masukkan angka positif.\n");
        } else {
            
            int temp = angka; // temp digunakan untuk menampung value dari var angka
            digitCount = 0; // memberi value pada var digitCount

            // Hitung digit angka menggunakan variable temp
            // while berulang sampai angka menjadi 0
            // temp /= 10; // mengubah angka menjadi angka yang lebih kecil 1 digit
            // digitCount Bertambah 1 secara terus menerus sampai temp menjadi 0

            while (temp != 0) {
                temp /= 10;
                digitCount++;
            }

            //Mencetak hasil digitCount dan angka yang diinputkan user
            printf("Angka adalah = %d\n", angka);
            printf("Jumlah digit adalah = %d\n", digitCount);
        }
    
    } while (angka < 0); 
    // Ulang jika dia bukan angka positif example = -1 dst
    //while berhenti jika user memasukkan angka yang bukan positif

    return 0;
}