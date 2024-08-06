#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
private:
    std::string first_name, last_name, father_name, city;
    int age;
public:
    Person();
    Person(std::string first_name, std::string last_name, int age, std::string father_name, std::string city);

    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_father_name() const;
    std::string get_city() const;
    int get_age() const;
};

#endif