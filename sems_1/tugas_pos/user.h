#ifndef USER_H
#define USER_H

#include <stdio.h>
#include <string.h>

typedef struct {
    char username[50];
    char password[50];
    char role[50];
} User;

void  setUser(User* user, char* username, char* password, char* role);
char* getUsername(User* user);
char* getPassword(User* user);
char* getRole(User* user);

#endif // USER_H