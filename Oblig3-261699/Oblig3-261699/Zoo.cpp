#include "Zoo.h"


Zoo::Zoo(std::string name, std::string location)
	:m_name{ name }, m_location{ location }
{

}

void Zoo::addAnimal(std::shared_ptr<Animal> animal_ptr)
{
	m_animal_ptrs.push_back(animal_ptr);
}

void Zoo::removeAnimal(Zoo& zoo, std::string animal)
{
	int position{ -1 };
	char userInput;
	for (auto animals : zoo.m_animal_ptrs) {
		++position;
		if (animals->get_name() == animal) {
			std::cout << "\nIs this the correct animal?: (y/n)" << std::endl;
			animals->presentation();
			std::cin >> userInput;
			if (tolower(userInput == 'y')) {
				zoo.m_animal_ptrs.erase(zoo.m_animal_ptrs.begin() + position);
				std::cout << "\n" << animals->get_name() << " removed\n" << std::endl;
				return;
			}
			else {
				std::cout << "\n" << animals->get_name() << " was not deleted" << std::endl;
				continue;
			}
			
		}
	}
	std::cout << "\nAnimal not found\n" << std::endl;
	
	
	
}

void Zoo::printAnimals()
{
	std::cout << "Animals:" << std::endl;
	for (const auto& animal : m_animal_ptrs) {
		std::cout << animal->get_name() << "\n";
	}
	std::cout << "\n\n";
}

void Zoo::printAnimalsExtended()
{
	std::cout << "Animals:" << std::endl;
	for (const auto& animal : m_animal_ptrs) {
		std::cout << *animal << "\n" << std::endl;
	}
	std::cout << "\n\n";
}

void Zoo::printMammals()
{
	std::cout << "Mammals:" << std::endl;
	for (const auto& animal : m_animal_ptrs) {
		if (typeid(*animal).name() == typeid(Mammal).name()) {
			std::cout << animal->get_name() << "\n";
		}
	}
	std::cout << "\n\n";

}

void Zoo::printMammalsExtended()
{
	std::cout << "Mammals:" << std::endl;
	for (const auto& animal : m_animal_ptrs) {
		if (typeid(*animal).name() == typeid(Mammal).name()) {
			std::cout << *animal << "\n" << std::endl;
		}
	}
	std::cout << "\n\n";
}

void Zoo::printFish()
{
	std::cout << "Fish:" << std::endl;
	for (const auto& animal : m_animal_ptrs) {
		if (typeid(*animal).name() == typeid(Fish).name()) {
			std::cout << animal->get_name() << "\n";
		}
	}
	std::cout << "\n\n";
}

void Zoo::printFishExtended()
{
	std::cout << "Fish:" << std::endl;
	for (const auto& animal : m_animal_ptrs) {
		if (typeid(*animal).name() == typeid(Fish).name()) {
			std::cout << *animal << "\n" << std::endl;
		}
	}
}

void Zoo::printBirds()
{
	std::cout << "Birds:" << std::endl;
	for (const auto& animal : m_animal_ptrs) {
		if (typeid(*animal).name() == typeid(Bird).name()) {
			std::cout << animal->get_name() << "\n";
		}
	}
	std::cout << "\n\n";
}

void Zoo::printBirdsExtended()
{
	std::cout << "Birds:" << std::endl;
	for (const auto& animal : m_animal_ptrs) {
		if (typeid(*animal).name() == typeid(Bird).name()) {
			std::cout << *animal << "\n" << std::endl;
		}
	}
	std::cout << "\n\n";
}

void Zoo::printZooInformation(Zoo& zoo)
{
	
	std::cout
		<< "\nZoo:\t\t" << zoo.m_name
		<< "\nLocation:\t" << zoo.m_location
		<< std::endl;
	
}


