#include <stdio.h>

//Check Angka Genap/Ganjil
void checkAngka(int angka){
    angka % 2 == 0 ? printf(" Nilai : Genap") : printf("Nilai : Ganjil");
}

int main() {
    int angka;
    
    printf("Masukkan sebuah angka integer: ");
    scanf("%d", &angka);
    printf("Nilai yang kamu masukan adalah :%d\n", angka);

    checkAngka(angka);
    return 0;
        
}