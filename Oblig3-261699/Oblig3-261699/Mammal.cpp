
#include "Mammal.h"

Mammal::Mammal(std::string name, std::string species, std::string movement, std::string sex, double weight)
	:Animal(name, species, movement, sex, weight)
{
	++s_count;
}

Mammal::~Mammal()
{
	--s_count;
}

void Mammal::presentation()
{
	std::cout << "Class:\t\tMammal\n" <<
		"Name:\t\t" << get_name() << "\nSpecies:\t"
		<< get_species() << "\nSex:\t\t" << get_sex()
		<< "\nWeight:\t\t" << get_weight() 
		<< "\nMovement:\t" << get_movement() << std::endl;
}

size_t Mammal::s_count = 0;