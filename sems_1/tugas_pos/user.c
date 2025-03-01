#include "user.h"

void setUser(User* user, char* username, char* password, char* role) {
    strcpy(user->username, username);
    strcpy(user->password, password);
    strcpy(user->role, role);
}

char* getUsername(User* user) {
    return user->username;
}

char* getPassword(User* user) {
    return user->password;
}

char* getRole(User* user) {
    return user->role;
}