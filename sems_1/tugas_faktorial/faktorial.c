#include <stdio.h>

int faktorial(int angka){
  return (angka == 0 || angka == 1) ?  1 : angka * faktorial(angka - 1);
}

int main(){
    int angka;

    printf("Masukan Bilangan: ");
    scanf("%d", &angka);


    printf("Bilangan anda adalah %d dan faktorialnya adalah: %d\n", angka, faktorial(angka));

    return 0;

}