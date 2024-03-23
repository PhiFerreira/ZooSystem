#include "Animal.h"
#include "Zoo.h"

Animal::Animal(std::string name, std::string species, std::string movement, std::string sex, double weight)
	:m_name{name}, m_species{species}, m_movement{movement}, m_sex{sex}, m_weight{weight}
{
	++s_count;
}

Animal::~Animal()
{
	--s_count;
}

void Animal::presentation()
{
}

std::ostream& operator<<(std::ostream& ost, const Animal& mrAnimal)
{
	return ost
		<< "Name:\t\t" << mrAnimal.m_name 
		<< "\nSpecies:\t" << mrAnimal.m_species 
		<< "\nSex:\t\t" << mrAnimal.m_sex
		<< "\nWeight:\t\t" << mrAnimal.m_weight 
		<< "\nMovement:\t" << mrAnimal.m_movement;
}

size_t Animal::s_count = 0;