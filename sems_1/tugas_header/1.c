#include <stdio.h>

int main()
{
    int x, a, c;
    float y;
    char z;

    printf("Masukkan sebuah angka a : ");
    scanf("%d", &a);

    printf("Masukkan sebuah angka x: ");
    scanf("%d", &x);

    c = a+x;

    printf("Nilai Iki Bro A %d dan X %d\n", a,x);

    printf("Nilai Iki Bro C %d\n", c);

    return 0;
}