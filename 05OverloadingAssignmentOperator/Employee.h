#include <iostream>
#include <string>
#include "Date.h"

enum class Gender
{
    male,
    female,
};
class Employee
{
private:
    std::string name;
    Gender gender;
    Date* birthday;
    static int numberOfObjects;

public:
    void setName(std::string name) { this->name = name; }
    void setGender(Gender gender) { this->gender = gender; }
    void setBirthday(Date birthday) { *(this->birthday) = birthday; }
    std::string getName() { return name; }
    Gender getGender() { return gender; }
    Date getbirthday() { return *birthday; }
    std::string toString()
    {
        return (name + (gender == Gender::male ? std::string("male") : std::string("female")) + birthday->toString());
    }
    Employee(std::string name, Gender gender, Date birthday) : name{ name }, gender{ gender }
    {
        numberOfObjects++;
        this->birthday = new Date{ birthday };
        std::cout << "now there are:" << numberOfObjects << "employee" << std::endl;
    }
    Employee() : Employee("Alan", Gender::male, Date(2000, 4, 1)) {}

    // Éî¿½±´
    Employee(const Employee& e) {
        this->birthday = new Date{ *(e.birthday) };
        this->name = e.name;
        this->gender = e.gender;
        numberOfObjects++;
    }

    Employee& operator= (const Employee& e) {
        this->name = e.name;
        this->gender = e.gender;
        *(this->birthday) = *(e.birthday);
        return (*this);
    }

    ~Employee()
    {
        numberOfObjects--;
        delete birthday;
        birthday = nullptr;
        std::cout << "now there are:" << numberOfObjects << "employee" << std::endl;
    }


};