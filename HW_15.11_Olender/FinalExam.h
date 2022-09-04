//
// Created by PJ Olender on 9/3/22.
//

#ifndef HW_15_11_OLENDER_FINALEXAM_H
#define HW_15_11_OLENDER_FINALEXAM_H

#include "GradedActivity.h"


class FinalExam : public GradedActivity{
private:
    int numQuestions;
    double pointsEach;
    int numMissed;

public:
    FinalExam(){
        numQuestions=0;
        pointsEach=0;
        numMissed=0;
    } // Default Constructor

    FinalExam(int questions,int missed){
        set(questions,missed);
    } // Constructor

    // Modifiers
    void set(int,int);
    void adjustScore();

    // Accessors
    double getNumQuestions()const{
        return numQuestions;
    }
    double getPointsEach()const{
        return pointsEach;
    }
    double getNumMissed()const{
        return numMissed;
    }
}; // END FinalExam Class


#endif //HW_15_11_OLENDER_FINALEXAM_H
