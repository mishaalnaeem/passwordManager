#ifndef PASSWORD_MANAGER
#define PASSWORD_MANAGER

#include <vector>
#include "credentialPair.h"

class PasswordManager {
    std::vector<CredentialPair> credentials; //vector of credentials saved by the user

    PasswordManager();
    ~PasswordManager();

    private:
        void encryptPassword(std::string password);
        void writeInFile(CredentialPair credentialPair);

    public:
        void addCredential(std::string username, std::string password);
        void updatePassword(std::string username, std::string oldPassword, std::string newPassword);
        void removeCredential(std::string username);
        void passwordEntriesCheck(std::string password, std::string reEnteredPassword);
};

#endif