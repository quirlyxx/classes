#pragma once
#include <iostream>
#include <cstring>

class Student {
private:
    char* name;
    char* surname;
    char* fathersName;
    char* birthDate;
    char* phoneNumber;
    char* city;
    char* country;
    char* university;
    char* universityCity;
    char* universityCountry;
    char* groupNumber;

public:
    Student() : name(nullptr), surname(nullptr), fathersName(nullptr), birthDate(nullptr),
        phoneNumber(nullptr), city(nullptr), country(nullptr), university(nullptr),
        universityCity(nullptr), universityCountry(nullptr), groupNumber(nullptr) {
    }

    Student(const char* n, const char* s, const char* f, const char* b, const char* p,
        const char* c, const char* co, const char* u, const char* uc, const char* uco, const char* g)
        : name(new char[strlen(n) + 1]), surname(new char[strlen(s) + 1]), fathersName(new char[strlen(f) + 1]),
        birthDate(new char[strlen(b) + 1]), phoneNumber(new char[strlen(p) + 1]), city(new char[strlen(c) + 1]),
        country(new char[strlen(co) + 1]), university(new char[strlen(u) + 1]),
        universityCity(new char[strlen(uc) + 1]), universityCountry(new char[strlen(uco) + 1]),
        groupNumber(new char[strlen(g) + 1]) {
        strcpy_s(name, strlen(n) + 1, n);
        strcpy_s(surname, strlen(s) + 1, s);
        strcpy_s(fathersName, strlen(f) + 1, f);
        strcpy_s(birthDate, strlen(b) + 1, b);
        strcpy_s(phoneNumber, strlen(p) + 1, p);
        strcpy_s(city, strlen(c) + 1, c);
        strcpy_s(country, strlen(co) + 1, co);
        strcpy_s(university, strlen(u) + 1, u);
        strcpy_s(universityCity, strlen(uc) + 1, uc);
        strcpy_s(universityCountry, strlen(uco) + 1, uco);
        strcpy_s(groupNumber, strlen(g) + 1, g);
    }

    ~Student() {
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

    inline const char* getName() const { return name; }
    inline const char* getSurname() const { return surname; }
    inline const char* getFathersName() const { return fathersName; }
    inline const char* getBirthDate() const { return birthDate; }
    inline const char* getPhoneNumber() const { return phoneNumber; }
    inline const char* getCity() const { return city; }
    inline const char* getCountry() const { return country; }
    inline const char* getUniversity() const { return university; }
    inline const char* getUniversityCity() const { return universityCity; }
    inline const char* getUniversityCountry() const { return universityCountry; }
    inline const char* getGroupNumber() const { return groupNumber; }

    inline void setName(const char* n) { delete[] name; name = new char[strlen(n) + 1]; strcpy_s(name, strlen(n) + 1, n); }
    inline void setSurname(const char* s) { delete[] surname; surname = new char[strlen(s) + 1]; strcpy_s(surname, strlen(s) + 1, s); }
    inline void setFathersName(const char* f) { delete[] fathersName; fathersName = new char[strlen(f) + 1]; strcpy_s(fathersName, strlen(f) + 1, f); }
    inline void setBirthDate(const char* b) { delete[] birthDate; birthDate = new char[strlen(b) + 1]; strcpy_s(birthDate, strlen(b) + 1, b); }
    inline void setPhoneNumber(const char* p) { delete[] phoneNumber; phoneNumber = new char[strlen(p) + 1]; strcpy_s(phoneNumber, strlen(p) + 1, p); }
    inline void setCity(const char* c) { delete[] city; city = new char[strlen(c) + 1]; strcpy_s(city, strlen(c) + 1, c); }
    inline void setCountry(const char* co) { delete[] country; country = new char[strlen(co) + 1]; strcpy_s(country, strlen(co) + 1, co); }
    inline void setUniversity(const char* u) { delete[] university; university = new char[strlen(u) + 1]; strcpy_s(university, strlen(u) + 1, u); }
    inline void setUniversityCity(const char* uc) { delete[] universityCity; universityCity = new char[strlen(uc) + 1]; strcpy_s(universityCity, strlen(uc) + 1, uc); }
    inline void setUniversityCountry(const char* uco) { delete[] universityCountry; universityCountry = new char[strlen(uco) + 1]; strcpy_s(universityCountry, strlen(uco) + 1, uco); }
    inline void setGroupNumber(const char* g) { delete[] groupNumber; groupNumber = new char[strlen(g) + 1]; strcpy_s(groupNumber, strlen(g) + 1, g); }

    void input();
    void output();
};

