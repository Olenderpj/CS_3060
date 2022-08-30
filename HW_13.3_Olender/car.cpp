//
// Created by PJ Olender on 8/28/22.
//

#include "car.h"


Car::Car(int yearModel, std::string make) {
    Car::yearModel = yearModel;
    Car::make = make;
    Car::speed = 0;
}

int Car::getYearModel() const {
    return yearModel;
}

void Car::setYearMode(int yearMode) {
    Car::yearModel = yearMode;
}

const std::string &Car::getMake() const {
    return make;
}

void Car::setMake(const std::string &make) {
    Car::make = make;
}

void Car::accelerate() {
    Car::speed += 5;
}

void Car::brake() {
    Car::speed -= 5;
}

int Car::getSpeed() const {
    return speed;
}
