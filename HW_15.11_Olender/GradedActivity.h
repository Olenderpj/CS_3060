//
// Created by PJ Olender on 09/03/2022
//

#ifndef HW_15_11_OLENDER_GRADEDACTIVITY_H
#define HW_15_11_OLENDER_GRADEDACTIVITY_H


#include <iostream>
using namespace std;

class GradedActivity {
protected:
    double score;

public:
    GradedActivity(){
        score=0;
    } // Default Constructor

    GradedActivity(double s){
        score=s;
    } // Constructor

    // Modifiers
    void setScore(double s){
        score=s;
    }

    // Accessors
    virtual double getScore()const{
        return score;
    }

    virtual char getLetterGrade()const;
};

#endif //HW_15_11_OLENDER_GRADEDACTIVITY_H
