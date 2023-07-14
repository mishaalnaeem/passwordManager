#ifndef CREDENTIAL_PAIR
#define CREDENTIAL_PAIR

#include <string>

class CredentialPair{
    std::string username;
    std::string password;

    public:
        CredentialPair();
        ~CredentialPair();

    void encryptPassword(string key);
};

#endif