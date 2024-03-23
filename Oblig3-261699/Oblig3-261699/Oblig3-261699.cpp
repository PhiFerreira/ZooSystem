// Oblig3-261699.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "Animal.h"
#include "Mammal.h"
#include "Fish.h"
#include "Zoo.h"
#include "Bird.h"

void add_animal(Zoo& zoo);
void remove_animal(Zoo& zoo);
void print_animals(Zoo& zoo);
void print_animals_extended(Zoo& zoo);
void test_animals(Zoo& zoo);
void zoo_information(Zoo& zoo);

int main()
{
    static bool endOfProgram = false;
    static Zoo Zootopia("Zootopia", "Amsterdam");
    
    test_animals(Zootopia); //Legger til noen "ferdige" dyr.
    
    std::cout << "Welcome to Zootopia Zoo.\nHow can I help you?\n\n" << std::endl;
    
    while (!endOfProgram) {
        int userAction{};
        
        while (1) {
            std::cout << "Choose action: (1/2/3/4/5/6)\n" << "1.Add animal\n" << "2.Remove animal\n" << "3.List of animals\n" << "4.List with full information\n" << "5.Zoo information\n" << "6.End program\n";
            std::cin >> userAction;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Please select a number between 1-6" << std::endl;
            }
            else {
                break;
            }
        }
        switch (userAction) {
        case 1:
            add_animal(Zootopia);
            break;
        case 2:
            remove_animal(Zootopia);
            break;
        case 3:
            print_animals(Zootopia);
            break;
        case 4:
            print_animals_extended(Zootopia);
            break;
        case 5:
            zoo_information(Zootopia);
            break;
        case 6:
            endOfProgram = true;
            break;
        default:
            std::cout << "Please select a number between 1-6" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
    }
        
}

void add_animal(Zoo& zoo)
{  
    bool satisfied{ false };
    while (!satisfied) {

        std::string animalType;
        std::cout << "\nAnimal type(1/2/3):\n1.Mammal\n2.Fish\n3.Bird\n";
        std::cin >> animalType;
        if (animalType == "1" || animalType == "Mammal" || animalType == "mammal") {
            std::string animalName;
            std::cout << "\nMammal name: ";
            std::cin >> animalName;

            std::string animalSpecies;
            std::cout << "Mammal species: ";
            std::cin >> animalSpecies;

            std::string animalMovement;
            std::cout << "Mammal movement: ";
            std::cin >> animalMovement;

            std::string animalSex;
            std::cout << "Mammal sex: ";
            std::cin >> animalSex;

            double animalWeight;
            while (1) {
                std::cout << "Mammal weight: ";
                std::cin >> animalWeight;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Not a valid input" << std::endl;
                }
                else {
                    break;
                }
            }

            std::cout << "\nYour input:\n" 
                << "\nName:\t\t" << animalName 
                << "\nSpecies:\t" << animalSpecies 
                << "\nMovement:\t" << animalMovement 
                << "\nSex:\t\t" << animalSex 
                << "\nWeight:\t\t" << animalWeight << std::endl;

            while (1) {
                char userInput{};
                std::cout << "\nIs this correct? (y/n): ";
                std::cin >> userInput;

                if (tolower(userInput) == 'y') {
                    satisfied = true;
                    zoo.addAnimal(std::make_shared<Mammal>(animalName, animalSpecies, animalMovement, animalSex, animalWeight));
                    break;
                }
                else if (tolower(userInput) == 'n') {
                    break;
                }
            }
        }

        else if (animalType == "2" || animalType == "Fish" || animalType == "fish") {
            std::string animalName;
            std::cout << "\nFish name: ";
            std::cin >> animalName;

            std::string animalSpecies;
            std::cout << "Fish species: ";
            std::cin >> animalSpecies;

            std::string animalMovement;
            std::cout << "Fish movement: ";
            std::cin >> animalMovement;

            std::string animalSex;
            std::cout << "Fish sex: ";
            std::cin >> animalSex;

            double animalWeight;
            while (1) {
                std::cout << "Fish weight: ";
                std::cin >> animalWeight;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Not a valid input" << std::endl;
                }
                else {
                    break;
                }
            }

            std::cout << "\nYour input:\n"
                << "\nName:\t\t" << animalName
                << "\nSpecies:\t" << animalSpecies
                << "\nMovement:\t" << animalMovement
                << "\nSex:\t\t" << animalSex 
                << "\nWeight:\t\t" << animalWeight << std::endl;

            while (1) {
                char userInput{};
                std::cout << "\nIs this correct? (y/n): ";
                std::cin >> userInput;

                if (tolower(userInput) == 'y') {
                    satisfied = true;
                    zoo.addAnimal(std::make_shared<Fish>(animalName, animalSpecies, animalMovement, animalSex, animalWeight));
                    break;
                }
                else if (tolower(userInput) == 'n') {
                    break;
                }
            }
        }

        else if (animalType == "3" || animalType == "Bird" || animalType == "bird") {
            std::string animalName;
            std::cout << "\nBird name: ";
            std::cin >> animalName;

            std::string animalSpecies;
            std::cout << "Bird species: ";
            std::cin >> animalSpecies;

            std::string animalMovement;
            std::cout << "Bird movement: ";
            std::cin >> animalMovement;

            std::string animalSex;
            std::cout << "Bird sex: ";
            std::cin >> animalSex;

            double animalWeight;
            while (1) {
                std::cout << "Bird weight: ";
                std::cin >> animalWeight;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Not a valid input" << std::endl;
                }
                else {
                    break;
                }
            }

            std::cout << "\nYour input:\n"
                << "\nName:\t\t" << animalName
                << "\nSpecies:\t" << animalSpecies
                << "\nMovement:\t" << animalMovement
                << "\nSex:\t\t" << animalSex 
                << "\nWeight:\t\t" << animalWeight << std::endl;

            while (1) {
                char userInput{};
                std::cout << "\nIs this correct? (y/n): ";
                std::cin >> userInput;

                if (tolower(userInput) == 'y') {
                    satisfied = true;
                    zoo.addAnimal(std::make_shared<Bird>(animalName, animalSpecies, animalMovement, animalSex, animalWeight));
                    std::cout << "\n";
                    break;
                }
                else if (tolower(userInput) == 'n') {
                    std::cout << "\n";
                    break;
                }
            }
        }

        else {
            std::cout << "\nNot a valid input.\n" << std::endl;
        }
    }
}

void remove_animal(Zoo& zoo)
{
    std::string animalName;
    std::cout << "\nEnter animal name: (case sensitive)" << std::endl;
    std::cin >> animalName;
    zoo.removeAnimal(zoo, animalName);
}

void print_animals(Zoo& zoo)
{
    char userInput{};
    std::cout << "\nDo you want to print specific type of animal? (y/n) ";
    std::cin >> userInput;
    if (tolower(userInput) == 'y') {
        char userInput;
        std::cout << "\nWhich one? (Mammal, Fish, Bird)(m/f/b) ";
        std::cin >> userInput;
        if (tolower(userInput) == 'm')  zoo.printMammals();
        else if (tolower(userInput) == 'f') zoo.printFish();
        else if (tolower(userInput) == 'b') zoo.printBirds();
        else std::cout << "\nNot a valid input\n" << std::endl; 
    }

    else if (userInput == 'n') {
        zoo.printAnimals();
    }
}

void print_animals_extended(Zoo& zoo)
{
    char userInput{};
    std::cout << "\nDo you want to print specific type of animal? (y/n) ";
    std::cin >> userInput;
    if (tolower(userInput) == 'y') {
        char userInput;
        std::cout << "\nWhich one? (Mammal, Fish, Bird)(m/f/b) ";
        std::cin >> userInput;
        if (tolower(userInput) == 'm')  zoo.printMammalsExtended();
        else if (tolower(userInput) == 'f') zoo.printFishExtended();
        else if (tolower(userInput) == 'b') zoo.printBirdsExtended();
        else std::cout << "\nNot a valid input\n" << std::endl;
    }

    else if (userInput == 'n') {
        zoo.printAnimalsExtended();
    }
}

void test_animals(Zoo& zoo)
{
    zoo.addAnimal(std::make_shared<Fish>("Sildvana", "Sild", "Krypende", "Han", 0.5));
    zoo.addAnimal(std::make_shared<Fish>("Jorgen", "Hai", "Svommende", "Hen", 0.7));
    zoo.addAnimal(std::make_shared<Fish>("Ask", "Gullfisk", "Svommende", "Han", 1.5));
    zoo.addAnimal(std::make_shared<Fish>("Christian", "Sild", "Svommende", "Han", 2.5));
    zoo.addAnimal(std::make_shared<Fish>("Ivar", "Piraja", "Svommende", "Han", 0.6));

    zoo.addAnimal(std::make_shared<Bird>("Ivanka", "Kraake", "Flyvende", "Hun", 3.5));
    zoo.addAnimal(std::make_shared<Bird>("Rauca", "Hakkespett", "Flyvende", "Hun", 1.7));
    zoo.addAnimal(std::make_shared<Bird>("Snufling", "Rodspette", "Flyvende", "Hun", 6.2));
    zoo.addAnimal(std::make_shared<Bird>("Dauing", "Kraake", "Flyvende", "Han", 4.9));
    zoo.addAnimal(std::make_shared<Bird>("Lurta", "Kraake", "Flyvende", "Hen", 15));

    zoo.addAnimal(std::make_shared<Mammal>("Roskan", "Kenguru", "Hoppende", "Han", 70.5));
    zoo.addAnimal(std::make_shared<Mammal>("Sven", "Bjorn", "Gaaende", "Han", 150.0));
    zoo.addAnimal(std::make_shared<Mammal>("Andrea", "Kenguru", "Hoppende", "Hun", 40.5));
    zoo.addAnimal(std::make_shared<Mammal>("Krag", "Bjorn", "Gaaende", "Han", 200.5));
    zoo.addAnimal(std::make_shared<Mammal>("Sverta", "Jerv", "Gaaende", "Hun", 10));
}

void zoo_information(Zoo& zoo)
{
    zoo.printZooInformation(zoo);
    std::cout
        << "Animals:\t" << Animal::get_animal_count()
        << "\n-Mammals:\t" << Mammal::get_mammal_count()
        << "\n-Birds:\t\t" << Bird::get_bird_count()
        << "\n-Fish:\t\t" << Fish::get_fish_count()
        << "\n\n" << std::endl;
}
