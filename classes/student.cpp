#include "student.h"
#include <iostream>

Student::Student()
    : Student(nullptr, nullptr, nullptr, nullptr, nullptr,
        nullptr, nullptr, nullptr, nullptr, nullptr, nullptr) {
}

Student::Student(const char* n, const char* s, const char* f, const char* b, const char* p,
    const char* c, const char* co, const char* u, const char* uc, const char* uco, const char* g) {
    name = n ? new char[strlen(n) + 1] : nullptr;
    surname = s ? new char[strlen(s) + 1] : nullptr;
    fathersName = f ? new char[strlen(f) + 1] : nullptr;
    birthDate = b ? new char[strlen(b) + 1] : nullptr;
    phoneNumber = p ? new char[strlen(p) + 1] : nullptr;
    city = c ? new char[strlen(c) + 1] : nullptr;
    country = co ? new char[strlen(co) + 1] : nullptr;
    university = u ? new char[strlen(u) + 1] : nullptr;
    universityCity = uc ? new char[strlen(uc) + 1] : nullptr;
    universityCountry = uco ? new char[strlen(uco) + 1] : nullptr;
    groupNumber = g ? new char[strlen(g) + 1] : nullptr;

    if (name) strcpy_s(name, strlen(n) + 1, n);
    if (surname) strcpy_s(surname, strlen(s) + 1, s);
    if (fathersName) strcpy_s(fathersName, strlen(f) + 1, f);
    if (birthDate) strcpy_s(birthDate, strlen(b) + 1, b);
    if (phoneNumber) strcpy_s(phoneNumber, strlen(p) + 1, p);
    if (city) strcpy_s(city, strlen(c) + 1, c);
    if (country) strcpy_s(country, strlen(co) + 1, co);
    if (university) strcpy_s(university, strlen(u) + 1, u);
    if (universityCity) strcpy_s(universityCity, strlen(uc) + 1, uc);
    if (universityCountry) strcpy_s(universityCountry, strlen(uco) + 1, uco);
    if (groupNumber) strcpy_s(groupNumber, strlen(g) + 1, g);
}


Student::~Student() {
    delete[] name;
    delete[] surname;
    delete[] fathersName;
    delete[] birthDate;
    delete[] phoneNumber;
    delete[] city;
    delete[] country;
    delete[] university;
    delete[] universityCity;
    delete[] universityCountry;
    delete[] groupNumber;
}

void Student::setName(const char* n) { delete[] name; name = new char[strlen(n) + 1]; strcpy_s(name, strlen(n) + 1, n); }
void Student::setSurname(const char* s) { delete[] surname; surname = new char[strlen(s) + 1]; strcpy_s(surname, strlen(s) + 1, s); }
void Student::setFathersName(const char* f) { delete[] fathersName; fathersName = new char[strlen(f) + 1]; strcpy_s(fathersName, strlen(f) + 1, f); }
void Student::setBirthDate(const char* b) { delete[] birthDate; birthDate = new char[strlen(b) + 1]; strcpy_s(birthDate, strlen(b) + 1, b); }
void Student::setPhoneNumber(const char* p) { delete[] phoneNumber; phoneNumber = new char[strlen(p) + 1]; strcpy_s(phoneNumber, strlen(p) + 1, p); }
void Student::setCity(const char* c) { delete[] city; city = new char[strlen(c) + 1]; strcpy_s(city, strlen(c) + 1, c); }
void Student::setCountry(const char* co) { delete[] country; country = new char[strlen(co) + 1]; strcpy_s(country, strlen(co) + 1, co); }
void Student::setUniversity(const char* u) { delete[] university; university = new char[strlen(u) + 1]; strcpy_s(university, strlen(u) + 1, u); }
void Student::setUniversityCity(const char* uc) { delete[] universityCity; universityCity = new char[strlen(uc) + 1]; strcpy_s(universityCity, strlen(uc) + 1, uc); }
void Student::setUniversityCountry(const char* uco) { delete[] universityCountry; universityCountry = new char[strlen(uco) + 1]; strcpy_s(universityCountry, strlen(uco) + 1, uco); }
void Student::setGroupNumber(const char* g) { delete[] groupNumber; groupNumber = new char[strlen(g) + 1]; strcpy_s(groupNumber, strlen(g) + 1, g); }

const char* Student::getName() { return name; }
const char* Student::getSurname() { return surname; }
const char* Student::getFathersName() { return fathersName; }
const char* Student::getBirthDate() { return birthDate; }
const char* Student::getPhoneNumber() { return phoneNumber; }
const char* Student::getCity() { return city; }
const char* Student::getCountry() { return country; }
const char* Student::getUniversity() { return university; }
const char* Student::getUniversityCity() { return universityCity; }
const char* Student::getUniversityCountry() { return universityCountry; }
const char* Student::getGroupNumber() { return groupNumber; }

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
