#ifndef CASHIER_H
#define CASHIER_H

#include "user.h"

typedef struct {
    User user;
} Cashier;

void processOrder(Cashier* cashier);

#endif // CASHIER_H