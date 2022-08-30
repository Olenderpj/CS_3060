#include <iostream>

#include "car.h"


int main() {
    Car car(1998, "Toyota Highlander");

    for (int i = 0; i < 5; i++){
        std::cout << "Accelerating" << std::endl;
        car.accelerate();
        std::cout << car.getSpeed() << std::endl;
    }

    for (int i = 0; i < 5; i++){
        std::cout << "Braking" << std::endl;
        car.brake();
        std::cout << car.getSpeed() << std::endl;
    }

    std::cout << "The current car is a " << car.getYearModel() << " " << car.getMake() << std::endl;



    return 0;
}
