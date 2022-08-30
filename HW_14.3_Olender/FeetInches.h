//
// Created by PJ Olender on 8/28/22.
//

#ifndef HW_14_3_OLENDER_FEETINCHES_H
#define HW_14_3_OLENDER_FEETINCHES_H


class FeetInches{
private:
    int feet;
    int inches;

public:
    FeetInches(int f = 0, int i = 0);

    FeetInches (const FeetInches &oldFIObject);

    FeetInches multiply(const FeetInches &);

    void simplify(const FeetInches &right);

    int getFeet() const;

    void setFeet(int feet);

    int getInches() const;

    void setInches(int inches);
};

#endif //HW_14_3_OLENDER_FEETINCHES_H
