#include <stdio.h>

// contoh penggunaan fungsi
// Ada 2 Argument
int hitung(int a, int b)
{   
    //akan mengeluarkan nilai bulat
    return a + b;
}

float hitungfloat(int a, int b)
{   
    // akan mengeluarkan nilai desimal
    return a + b;
}

void cetak(int c,int x)
{
    int z;

    
    z = c+x;


    printf("%d\n", z);
    printf("%d\n", hitung(10, 10));
    printf("%f\n", hitungfloat(10.00, 10.00));
    printf("\nHalo nama saya nabils24");
}

// Fungsi Main yang pertama dijalankan
void main()
{
    //memanggil fungsi cetak
    cetak(10,10);
}
