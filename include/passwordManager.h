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
        bool addCredential(std::string username, std::string password, std::string reEnteredPassword);
        bool updatePassword(std::string username, std::string oldPassword, std::string newPassword);
        bool updateUsername(std::string username);
        void removeCredential(std::string username);
        CredentialPair getCredential(std::string username, std::string key);
        void setAppPassword(std::string password, std::string reEnteredPassword);
        bool matchAppPassword(std::string password);
        std::vector<std::string> getAllUsernames();
};

#endif