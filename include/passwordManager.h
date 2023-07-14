#ifndef PASSWORD_MANAGER
#define PASSWORD_MANAGER

#include <vector>
#include "credentialPair.h"

class PasswordManager {
    std::vector<CredentialPair> credentials; //vector of credentials saved by the user

    public:
        PasswordManager();
        ~PasswordManager();

    private:
        void writeInFile(CredentialPair credentialPair);

    public:
        void addCredential(std::string username, std::string password, std::string reEnteredPassword);
        void updatePassword(std::string username, std::string oldPassword, std::string newPassword);
        void removeCredential(std::string username);
        void getCredential(std::string username, std::string key);
};

#endif