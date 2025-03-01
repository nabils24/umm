#include <stdio.h>
// menambahkan header untuk boolean yaitu stdbool.h
#include <stdbool.h>
#include <string.h>

int main()
{
    // Boolean values
    // Mengganti boolean menjadi bool karena type data boolean adalah bool
    bool flagTrue = true;
    bool flagFalse = false;

    printf("Boolean values demonstration:\n");
    // menambahkan value yang ingin dikeluarkan
    printf("flagTrue: %d\n", flagTrue);
    printf("flagFalse: %d\n", flagFalse);

    // String operations
    char greeting[] = "Hello, World!";
    char copyGreeting[20];
    //mengganti stringcopy menjadi strcpy
    strcpy(copyGreeting, greeting);

    printf("\nString operations:\n");
    //mengganti string1 dan string2 dengan variable yg benar
    printf("Original greeting: %s\n", greeting);
    printf("Copied greeting: %s\n", copyGreeting);

    // Pointer demonstrations
    int number = 100;
    int *pointer = &number;

    printf("\nPointer demonstrations:\n");
    // menambahkan value yang ingin dikeluarkan
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    // menambahkan value yang ingin dikeluarkan
    printf("Value of pointer: %p\n", (void *)pointer);
    printf("Value pointed by pointer: %d\n", *pointer);

    return 0;
}