//
// Created by PJ Olender on 09/03/2022
//

#include "FinalExam.h"

// set the final exam score and adjust it to the nearest whole number
void FinalExam::set(int questions, int missed){
    double numericScore;

    numQuestions = questions;
    numMissed = missed;

    pointsEach = 100 / numQuestions;

    numericScore = 100 - (missed * pointsEach);

    setScore(numericScore);
    adjustScore();
}

// Adjust the score by 0.5 of a point
void FinalExam::adjustScore(){
    double fraction = score - static_cast<int> (score);
    if (fraction >= 0.5){
        score += (1.0 - fraction);
    }
}