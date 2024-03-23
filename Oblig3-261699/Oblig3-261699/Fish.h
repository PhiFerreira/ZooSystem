#pragma once
#include "Animal.h"
#include <string>
#include <iostream>
class Fish :
    public Animal
{
public:
    explicit Fish(std::string name, std::string species, std::string movement, std::string sex, double weight);
    ~Fish();
    static size_t get_fish_count() { return s_count; }
    void presentation();
    
    


protected:

private:
    static size_t s_count;
};


