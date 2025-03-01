#include <stdio.h>

#define BATAS_KALORI 2000 // definisikan nilai batas_kalori untuk batas kalori harian

int main() {
    int jumlah_makanan, kalori, total_kalori = 0;
    
    // 1. Pengenalan Program
    printf("=== Program Penghitung Kalori made by nabils24 ===\n");
    printf("Program iki totalke kalori seng sampean konsumsi dino iki.\n\n");
    
    // 2. Mengambil input dari pengguna
    printf("Piro jenis panganan seng sampean mangan dino iki? ");
    scanf("%d", &jumlah_makanan);
    
    for (int i = 1; i <= jumlah_makanan; i++) {
        printf("masukno jumlah kalori panganan seng pean mangan ke-%d: ", i);
        scanf("%d", &kalori);
        
        // 3. Menghitung total kalori
        total_kalori += kalori;
    }
    
    // 4. Memeriksa batas kalori made by nabils24
    int melebihi_batas = (total_kalori > BATAS_KALORI);
    
    // 5. Menampilkan hasil
    printf("\n=== Hasil perhitungane ===\n");
    printf("Total kalori seng sampean konsumsi: %d kalori\n", total_kalori);
    
    printf(melebihi_batas ? 
       "sampean telah melebihi batas kalori dino seng direkomen!\n" : 
       "sampean masih dalam batas kalori dino seng direkomen.\n");
    
    return 0;
}