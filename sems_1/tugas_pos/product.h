#ifndef PRODUCT_H
#define PRODUCT_H
#define MAX_MENU_ITEMS 10
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char description[100];
    int price;
} MenuItem;

typedef struct {
    MenuItem* items;
    int size;
    int capacity;
} MenuArrayList;

MenuArrayList* createMenuArrayList(int initialCapacity) {
    MenuArrayList* list = malloc(sizeof(MenuArrayList));
    list->items = malloc(initialCapacity * sizeof(MenuItem));
    list->size = 0;
    list->capacity = initialCapacity;
    return list;
}

void initMenuArrayList(MenuArrayList* list) {
    list->items = (MenuItem*) malloc(MAX_MENU_ITEMS * sizeof(MenuItem));
    list->size = 0;
    list->capacity = MAX_MENU_ITEMS;
}

void addMenuItem(MenuArrayList* list, char* name, char* description, int price) {
    if (list->size < list->capacity) {
        MenuItem item;
        strcpy(item.name, name);
        strcpy(item.description, description);
        item.price = price;
        list->items[list->size] = item;
        list->size++;
    } else {
        printf("Menu is full!\n");
    }
}



void printMenu(MenuArrayList* list) {
    for (int i = 0; i < list->size; i++) {
        printf("Menu Item %d:\n", i + 1);
        printf("Name: %s\n", list->items[i].name);
        printf("Description: %s\n", list->items[i].description);
        printf("Price: %d\n", list->items[i].price);
        printf("\n");
    }
}

#endif //  PRODUCT_H
