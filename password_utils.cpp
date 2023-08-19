#include <iostream>
#include <string>
#include "password_utils.h"

int main() {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    std::string hashedPassword = PasswordUtils::generateHash(password);
    std::cout << "Hashed password: " << hashedPassword << std::endl;

    std::string enteredHash;
    std::cout << "Enter the hash value to verify: ";
    std::cin >> enteredHash;

    if (PasswordUtils::verifyPassword(password, enteredHash))
        std::cout << "Password is correct!" << std::endl;
    else
        std::cout << "Password is incorrect!" << std::endl;

    return 0;
}
