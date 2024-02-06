// Location.cpp
#include "Location.h"
#include "Console.h"
#include <iostream>

// Empty constructor implementation
Location::Location() {
    // Initialization code, if any
    name = "Default location name";
}

Location::Location(const std::string& newName) {
    name = newName;
}

// Method to enter the location implementation
void Location::enter() {
    clear();
    std::cout << "You have entered " + name + "\n";
}
