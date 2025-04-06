#include "student.h"
#include <iostream>

void Student::input() {
    char buffer[100];

    std::cout << "Enter name: ";
    std::cin.getline(buffer, 100);
    setName(buffer);

    std::cout << "Enter surname: ";
    std::cin.getline(buffer, 100);
    setSurname(buffer);

    std::cout << "Enter father's name: ";
    std::cin.getline(buffer, 100);
    setFathersName(buffer);

    std::cout << "Enter birth date: ";
    std::cin.getline(buffer, 100);
    setBirthDate(buffer);

    std::cout << "Enter phone number: ";
    std::cin.getline(buffer, 100);
    setPhoneNumber(buffer);

    std::cout << "Enter city: ";
    std::cin.getline(buffer, 100);
    setCity(buffer);

    std::cout << "Enter country: ";
    std::cin.getline(buffer, 100);
    setCountry(buffer);

    std::cout << "Enter university name: ";
    std::cin.getline(buffer, 100);
    setUniversity(buffer);

    std::cout << "Enter university city: ";
    std::cin.getline(buffer, 100);
    setUniversityCity(buffer);

    std::cout << "Enter university country: ";
    std::cin.getline(buffer, 100);
    setUniversityCountry(buffer);

    std::cout << "Enter group number: ";
    std::cin.getline(buffer, 100);
    setGroupNumber(buffer);
}

void Student::output() {
    std::cout << "\nStudent Info:\n";
    std::cout << "Name: " << getName() << " " << getFathersName() << " " << getSurname() << "\n";
    std::cout << "Birth Date: " << getBirthDate() << "\n";
    std::cout << "Phone number: " << getPhoneNumber() << "\n";
    std::cout << "City: " << getCity() << ", Country: " << getCountry() << "\n";
    std::cout << "University: " << getUniversity() << " (" << getUniversityCity() << ", " << getUniversityCountry() << ")\n";
    std::cout << "Group: " << getGroupNumber() << "\n";
}
