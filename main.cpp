#include <string>
#include "Location.h"
#include <iostream>


int main() {
    std::cout << "Enter your name: \n";
    std::string a;
    std::cin >> a;
    std::cout << "Your name is: " + a + "\n";
    Location loc;
    loc.enter();
    Location namedLoc("Test name");
    namedLoc.enter();
}