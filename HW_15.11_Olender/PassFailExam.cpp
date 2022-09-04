//
// Created by PJ Olender on 9/3/22.
//

#include "PassFailExam.h"

void PassFailExam::set(int questions, int missed) {
    double numericScore;

    numberQuestions = questions;
    missedQuestions = missed;

    // calculate points for each question;
    pointsPerQuestion = 100.0 / numberQuestions;
    numericScore = 100.0 - (missed * pointsPerQuestion);

    // Call the function inherited from Graded Activity
    setScore(numericScore);
}

