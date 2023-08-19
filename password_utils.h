#ifndef PASSWORD_UTILS_H
#define PASSWORD_UTILS_H

#include <string>

class PasswordUtils {
public:
    static std::string generateHash(const std::string &password);
    static bool verifyPassword(const std::string &password, const std::string &hashedPassword);
};

#endif // PASSWORD_UTILS_H
