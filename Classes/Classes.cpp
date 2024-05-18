#include "Car.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    std::cout << "Enter size : ";
    std::cin >> n;

    std::vector<Car> v;

    for (int i = 0; i < n; i++) {
        std::string carname;
        std::cout << "name : ";
        std::cin >> carname;

        int caryear;
        std::cout << "year : ";
        std::cin >> caryear;

        Car car;

        car.setName(carname);
        car.setYear(caryear);

        v.push_back(car);
    }

    for (auto& i : v) {
        i.displayData();
    }
}
