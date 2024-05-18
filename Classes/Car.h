#include <string>

#ifndef CAR_H

#pragma once
class Car {
protected:
    std::string name;
    int year;
public:
    Car();

    Car(std::string, int);

    void setName(std::string);

    void setYear(int);

    int getYear();

    void displayData();

    ~Car();
};

#endif // !CAR_H
