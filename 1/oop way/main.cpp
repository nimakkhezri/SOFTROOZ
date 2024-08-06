#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "Person.h"

std::vector<Person> readCSV(const std::string& filename);
void printCSV(const std::vector<Person>& persons);

int main() {
    std::vector<Person> persons = readCSV("data.csv");
    printCSV(persons);
    system("Pause");
}

std::vector<Person> readCSV(const std::string& filename) {
    std::vector<Person> persons;
    std::ifstream file (filename);

    if(file.is_open()) {
        std::string line;

        std::getline(file, line);

        std::string first_name, last_name, father_name, city, age;

        while(std::getline(file, line)) {
            std::stringstream ss(line);

            std::getline(ss, first_name, ',');
            std::getline(ss, last_name, ',');
            std::getline(ss, age, ',');
            std::getline(ss, father_name, ',');
            std::getline(ss, city, ',');

            persons.push_back(Person(first_name, last_name, std::stoi(age), father_name, city));
        }
        file.close();
    } else {
        std::cout << "file \"" << filename << "\" can not be opened! " << std::endl;
    }

    return persons;
}

void printCSV(const std::vector<Person>& persons) {
    std::cout << "   " << std::setw(25) << std::left << "First name" << std::setw(25) << "Last name" << std::setw(25) 
        << "Age" << std::setw(25) << "Father's name" << std::setw(25) << "City\n" << std::endl;

    int i = 1;
    for(const Person& person : persons) {
        std::cout << i++ << ". " << std::setw(25) << std::left << person.get_first_name() << std::setw(25) 
            << person.get_last_name() << std::setw(25) << person.get_age() << std::setw(25) << person.get_father_name()
            << std::setw(25) << person.get_city() << std::endl;
    }
}