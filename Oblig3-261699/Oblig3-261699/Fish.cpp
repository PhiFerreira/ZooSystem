#include "Fish.h"

Fish::Fish(std::string name, std::string species, std::string movement, std::string sex, double weight)
	:Animal(name, species, movement, sex, weight)
{
	++s_count;
}

Fish::~Fish()
{
	--s_count;
}

void Fish::presentation()
{
	std::cout << "Class:\t\tFish\n" << 
		"Name:\t\t" << get_name() << "\nSpecies:\t" 
		<< get_species() << "\nSex:\t\t" << get_sex() 
		<< "\nWeight:\t\t" << get_weight()
		<< "\nMovement:\t" << get_movement() << std::endl;
}

size_t Fish::s_count = 0;


