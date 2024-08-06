#include "Person.h"

Person::Person() {}

Person::Person(std::string first_name, std::string last_name, int age, std::string father_name, std::string city) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->age = age;
    this->father_name = father_name;
    this->city = city;
}

// Getter functions

std::string Person::get_first_name() const {
    return first_name;
}

std::string Person::get_last_name() const {
    return last_name;
}

std::string Person::get_father_name() const {
    return father_name;
}

std::string Person::get_city() const {
    return city;
}

int Person::get_age() const {
    return age;
}