cmake_minimum_required(VERSION 3.12)
project(PasswordManager)

# Find OpenSSL package
find_package(OpenSSL REQUIRED)

# Add include directories for OpenSSL
include_directories(${OPENSSL_INCLUDE_DIR})

include_directories(include)

# Add your source files
set(SOURCES
    src/PasswordManager.cpp
    src/credentialPair.cpp
    main.cpp
)

# Create an executable target
add_executable(${PROJECT_NAME} ${SOURCES})

# Link OpenSSL libraries
target_link_libraries(${PROJECT_NAME} PRIVATE ${OPENSSL_CRYPTO_LIBRARY} ${OPENSSL_SSL_LIBRARY})
