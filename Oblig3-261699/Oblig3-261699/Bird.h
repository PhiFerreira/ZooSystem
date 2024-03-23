#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
public:
    explicit Bird(std::string name, std::string species, std::string movement, std::string sex, double weight);
    ~Bird();
    static size_t get_bird_count() { return s_count; }
    void presentation();

protected:

private:
    static size_t s_count;
};

