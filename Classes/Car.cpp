#include "Car.h"
#include <iostream>
#include<string>

Car::Car() {
	name = "";
	year = 0;
}

Car::Car(std::string name, int year) {
	this->name = name;
	this->year = year;
}

void Car::setName(std::string name) {
	this->name = name;
}

void Car::setYear(int year) {
	this->year = year;
}

int Car::getYear() {
	return year;
}

void Car::displayData() {
	std::cout << name << " " << year << "\n";
}

Car::~Car() {

}
