#include "Bird.h"

Bird::Bird(std::string name, std::string species, std::string movement, std::string sex, double weight)
	:Animal(name, species, movement, sex, weight)
{
	++s_count;
}

Bird::~Bird()
{
	--s_count;
}

void Bird::presentation()
{
	std::cout << "Class:\t\tBird\n" <<
		"Name:\t\t" << get_name() 
		<< "\nSpecies:\t" << get_species() 
		<< "\nSex:\t\t" << get_sex()
		<< "\nWeight:\t\t" << get_weight()
		<< "\nMovement:\t" << get_movement() << std::endl;
}

size_t Bird::s_count = 0;

