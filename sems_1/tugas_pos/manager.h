#ifndef MANAGER_H
#define MANAGER_H

#include "user.h"

typedef struct {
    User user;
} Manager;

void viewPopularMenu(Manager* manager);

#endif // MANAGER_H