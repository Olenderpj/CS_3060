//
// Created by PJ Olender on 8/28/22.
//

#ifndef HW_13_3_OLENDER_CAR_H
#define HW_13_3_OLENDER_CAR_H

#include <string>


class Car{
    public:
        int yearModel;
        int speed;
        std::string make;

        Car(int carYearModel, std::string carMake);


        int getYearModel() const;

        void setYearMode(int yearMode);

        const std::string &getMake() const;

        void setMake(const std::string &make);

        void accelerate();

        void brake();

        int getSpeed() const;
};

#endif //HW_13_3_OLENDER_CAR_H
