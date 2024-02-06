#include <stdlib.h>
void clear() {
    #if defined(__linux__) // Or #if __linux__
        // std::cout << "Hello, GNU/Linux!" << '\n';
        system("clear");
    #elif _WIN32
        // std::cout << "Hello, Windows!" << '\n';
        system("cls");
    #else
        // std::cout << "Hello, Other!" << '\n';
    #endif
}