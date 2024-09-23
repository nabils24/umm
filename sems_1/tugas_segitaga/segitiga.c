#include <stdio.h>


void cetakSegita(int n){

    int i,k,j;

    for ( i = 0; i < n; i++)
    {
        
        for(j=i; j<n; j++){
            printf(" ");
        }

        for (k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

};

int main(){

    int n;

    printf("Masukan Tinggi Segitiga\n");
    scanf("%d", &n);

    cetakSegita(n);

    return 0;



}