#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include "product.h"

typedef struct {
    User user;
    MenuArrayList menu;
} Admin;

void manageMenu(Admin* admin);

#endif // ADMIN_H