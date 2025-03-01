#include <stdio.h>

int main()
{

    int i, element, sum;
    float rata2;

    printf("Masukan Nilai Panjang Array: ");
    scanf("%d", &element);

    int array[element];

    for (i = 0; i < element; i++)
    {
        printf("Masukan Nilai Array Ke-%d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }
    rata2 = sum / element;

    printf("Rata rata adalah : %.2f", rata2);
}
