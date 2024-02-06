// Location.h
#ifndef LOCATION_H
#define LOCATION_H

#include <string>

class Location {
    public:
        std::string name;
        // Empty constructor
        Location();

        // Pass a reference to the string (string&) in the argument rather than the value
        // - this prevents a copy of the string from being made, and does not allow a null
        // value (unlike a pointer, which also would prevent a string copy)
        Location(const std::string& newName);

        // Method to enter the location
        void enter();
};

#endif
