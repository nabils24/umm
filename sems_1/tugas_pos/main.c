#include "admin.h"
#include "product.h"
#include "cashier.h"
#include "manager.h"

int main()
{
    Admin admin;
    setUser(&admin.user, "admin", "password", "admin");

    Cashier cashier;
    setUser(&cashier.user, "cashier", "password", "cashier");

    Manager manager;
    setUser(&manager.user, "manager", "password", "manager");

    // login functionality
    char username[50], password[50];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0)
    {
        printf("Selamat datang, Admin!\n");
        printf("Pilih opsi:\n");
        printf("1. Tambahkan menu item baru\n");
        printf("2. Lihat menu\n");
        printf("3. Keluar\n");

        int pilihan;
        scanf("%d", &pilihan);

        if (pilihan == 1)
        {

            int choice;
            printf("Pilih opsi:\n");
            printf("1. Tambahkan menu item baru\n");
            printf("2. Sudah selesai\n");
            scanf("%d", &choice);
            do
            {
                switch (choice)
                {
                case 1:
                    char namaMenu[50], deskripsiMenu[100];
                    int hargaMenu;

                    printf("Masukkan nama menu: ");
                    scanf("%s", namaMenu);
                    printf("Masukkan deskripsi menu: ");
                    scanf("%s", deskripsiMenu);
                    printf("Masukkan harga menu: ");
                    scanf("%d", &hargaMenu);

                    addMenuItem(&admin.menu, namaMenu, deskripsiMenu, hargaMenu);
                    

                    // Ask again to add another menu item or finish
                    printf("Pilih opsi:\n");
                    printf("1. Tambahkan menu item baru\n");
                    printf("2. Sudah selesai\n");
                    scanf("%d", &choice);

                case 2:
                    // Return to main menu
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
                }
            } while (choice != 2);
            if (choice == 2)
            {
                printf("Selamat datang, Admin!\n");
                printf("Pilih opsi:\n");
                printf("1. Tambahkan menu item baru\n");
                printf("2. Lihat menu\n");
                printf("3. Keluar\n");

                scanf("%d", &pilihan);
                // ... rest of the main menu logic ...
                if(pilihan == 2){
                    printMenu(&admin.menu);
                }else if(pilihan == 3){
                    printf("Terima kasih, Admin!\n");
                }
            }
        }
        else if (pilihan == 2)
        {
            printMenu(&admin.menu);
        }
        else if (pilihan == 3)
        {
            printf("Terima kasih, Admin!\n");
        }
    }
    else if (strcmp(username, "cashier") == 0 && strcmp(password, "password") == 0)
    {
        processOrder(&cashier);
    }
    else if (strcmp(username, "manager") == 0 && strcmp(password, "password") == 0)
    {
        viewPopularMenu(&manager);
    }
    else
    {
        printf("Invalid username or password!\n");
    }

    return 0;
}