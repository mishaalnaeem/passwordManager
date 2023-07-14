#ifndef KEY_MANAGER
#define KEY_MANAGER

#include <string>

class KeyManager
{
    std::string key; //destroyed after one use
    public:
        KeyManager(); 
        ~KeyManager();

    private:
        std::string readEncryptedKey();
        std::string destroyKey(); //called at end of matchKey and getKey

    public:
        bool matchKey(std::string inputKey);
        bool resetKey();
        std::string getKey();
};

#endif