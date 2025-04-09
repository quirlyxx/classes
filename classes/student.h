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
    Student();
    Student(const char* n, const char* s, const char* f, const char* b, const char* p,
        const char* c, const char* co, const char* u, const char* uc, const char* uco, const char* g);
    ~Student();

    void setName(const char* n);
    void setSurname(const char* s);
    void setFathersName(const char* f);
    void setBirthDate(const char* b);
    void setPhoneNumber(const char* p);
    void setCity(const char* c);
    void setCountry(const char* co);
    void setUniversity(const char* u);
    void setUniversityCity(const char* uc);
    void setUniversityCountry(const char* uco);
    void setGroupNumber(const char* g);

    const char* getName();
    const char* getSurname();
    const char* getFathersName();
    const char* getBirthDate();
    const char* getPhoneNumber();
    const char* getCity();
    const char* getCountry();
    const char* getUniversity();
    const char* getUniversityCity();
    const char* getUniversityCountry();
    const char* getGroupNumber();

    void input();
    void output();
};

