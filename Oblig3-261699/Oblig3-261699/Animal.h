#pragma once
#include <string>
#include <iostream>


class Animal
{
public:
	explicit Animal(std::string name, std::string species, std::string movement, std::string sex, double weight);
	~Animal();
	

	std::string get_name() const { return m_name; }
	std::string get_species() const { return m_species; }
	std::string get_movement() const { return m_movement; }
	std::string get_sex() const { return m_sex; }
	double get_weight() const { return m_weight; }
	static size_t get_animal_count() { return s_count; }
	virtual void presentation() = 0;
	friend std::ostream& operator<<(std::ostream& ost, const Animal& mrAnimal);

protected:

private:
	std::string m_name;
	std::string m_species;
	std::string m_movement;
	std::string m_sex;
	double m_weight;
	static size_t s_count;

};

std::ostream& operator<<(std::ostream& ost, const Animal& mrAnimal);

