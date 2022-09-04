//
// Created by PJ Olender on 9/3/22.
//

#ifndef HW_15_11_OLENDER_PASSFAILEXAM_H
#define HW_15_11_OLENDER_PASSFAILEXAM_H

#include "PassFailActivity.h"

class PassFailExam : public PassFailActivity {
private:
    int numberQuestions; // Total UNumber of Questions
    double pointsPerQuestion; // Number of points for each question
    int missedQuestions; // Total number of questions missed

public:
    // Default Constructor
    PassFailExam() : PassFailActivity(){
        numberQuestions = 0;
        pointsPerQuestion = 0.0;
        missedQuestions = 0;
    }

    // Constructor
    PassFailExam(int questions, int missed, double mps) : PassFailActivity(mps){
        set(questions, missed);
    }

    void set(int, int);


    // Accessor Functions
    int getNumberQuestions() const {
        return numberQuestions;
    }

    double getPointsPerQuestion() const {
        return pointsPerQuestion;
    }

    int getMissedQuestions() const {
        return missedQuestions;
    }
}; // END PassFailExam Class


#endif //HW_15_11_OLENDER_PASSFAILEXAM_H
