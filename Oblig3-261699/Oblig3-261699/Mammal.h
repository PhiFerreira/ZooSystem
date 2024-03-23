#pragma once
#include "Animal.h"
class Mammal :
    public Animal
{
public:
    explicit Mammal(std::string name, std::string species, std::string movement, std::string sex, double weight);
    ~Mammal();
    static size_t get_mammal_count() { return s_count; }
    void presentation();
protected:

private:

    static size_t s_count;
};

