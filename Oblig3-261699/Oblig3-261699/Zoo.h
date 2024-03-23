#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>

#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"



class Zoo
{
public:
	explicit Zoo(std::string name, std::string location);
	
	void addAnimal(std::shared_ptr<Animal> animal_ptr);
	void removeAnimal(Zoo& zoo, std::string animal);
	void printAnimals();
	void printAnimalsExtended();
	void printMammals();
	void printMammalsExtended();
	void printFish();
	void printFishExtended();
	void printBirds();
	void printBirdsExtended();
	void printZooInformation(Zoo& zoo);
protected:


private:
	std::string m_name;
	std::string m_location;
	std::vector<std::shared_ptr<Animal>> m_animal_ptrs;
	

};