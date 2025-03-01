#include <stdio.h>

int main()
{ int angka1; 
  int angka2 ;
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    if (angka1 > angka2)
    {
        printf("Bilangan terbesar adalah %d\n", angka1);
    }
    else if (angka2 > angka1)
    {
        printf("Bilangan terbesar adalah %d\n", angka2);
    }
    else
    {
        printf("Kedua angka sama besar");
    }
    return 0;
}
