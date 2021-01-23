#pragma once
#include <string>
#include "Santa.h"

// Create a class called Character which inherits from the GameStructure class. 
class SantaSystem : public Santa 
{
public:
    // Create a public porperty in the Character class and all it Name. 
    // Properties are just variables, don't over think them :)
    std::string Shoot;
private:
};

