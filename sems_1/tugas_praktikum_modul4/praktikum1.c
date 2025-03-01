#include <stdio.h>

int main()
{
    int transaksi, total = 0, bahasa;

    printf("1. Indonesia\n2. Jawa\n3. Inggris\n");
    printf("Mau Pakai Bahasa Apa?");
    scanf("%d", &bahasa);


    //
    if (bahasa == 1)
    {
        printf("== Catat Transaksi ==\n");

        // Loop utama untuk mencatat transaksi
        while (1)
        {
            printf("Masukkan transaksi (gunakan 0 untuk menyelesaikan): ");
            scanf("%d", &transaksi); // Input transaksi

            // Jika transaksi adalah 0, keluar dan tampilkan total
            if (transaksi == 0)
            {
                break;
            }

            // Jika transaksi bukan 0, tambahkan ke total
            total += transaksi;
        }

        // Menampilkan total setelah keluar dari loop
        printf("Total dari semua transaksi adalah: %d\n", total);

        printf("Terima kasih\n");
    }
    // Bahasa Jawa 
    else if (bahasa == 2) 
    {
        printf("== Catat Transaksi ==\n");

        // Loop utama untuk mencatat transaksi
        while (1)
        {
            printf("masukno transaksi (gunake 0 kanggo menyelesaino): ");
            scanf("%d", &transaksi); // Input transaksi

            // Jika transaksi adalah 0, keluar dan tampilkan total
            if (transaksi == 0) 
            {
                break;
            }

            // Jika transaksi bukan 0, tambahkan ke total
            total += transaksi;
        }

        // Menampilkan total setelah keluar dari loop
        printf("Total soko kabeh transaksi  iki yaiku : %d\n", total);

        printf("suwun\n");
    }
    //Bahasa Inggris | Default
    else
    {
        printf("== Transaction Recording ==\n");

        // Main loop to record transactions
        while (1)
        {
            printf("Enter transaction (use 0 to finish): ");
            scanf("%d", &transaksi); // Input transaction

            // If the transaction is 0, exit and display the total
            if (transaksi == 0)
            {
                break;
            }

            // If the transaction is not 0, add it to the total
            total += transaksi;
        }

        // Display the total after exiting the loop
        printf("Total of all transactions is: %d\n", total);

        printf("Thank you\n");
    }

    return 0;
}
