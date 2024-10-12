#include <stdio.h>

void hitung_s()
{
    int x = 5;

    printf("===================================\n");

    x += 3;
    printf("Penambahan : %d\n", x);

    x -= 3;
    printf("Pengurangan : %d\n", x);

    x *= 4;
    printf("Perkalian : %d\n", x);

    x /= 2;
    printf("Pembagian : %d\n", x);

    x %= 3;
    printf("Modulus : %d\n", x);

    printf("===================================\n");
}

void contoh(){
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Nilai dari  num : %d\n", *ptr);
    printf("Alamat memori dari num: %p\n", &num);
    printf("nilai pointer : %p\n", *ptr);
    printf("alamat pointer : %p\n", ptr);


}

int main()
{   
    hitung_s();

    printf("===================================\n");
    char namaDepan[50];
    printf("Masukan Nama Depan anda: ");
    scanf("%s", &namaDepan);
    printf("Nama depan anda adalah: %s\n", namaDepan);
}



