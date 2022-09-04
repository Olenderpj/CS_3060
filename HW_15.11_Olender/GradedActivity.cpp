//
// Created by PJ Olender on 4/6/2022.
//

#include "GradedActivity.h"

// Determine what letter grade a student used based on the numeric SCORE value
char GradedActivity::getLetterGrade() const{
    char letterGrade;

    if(score >= 90){
        letterGrade='A';
    }
    else if(score >=80){
        letterGrade='B';
    }
    else if(score >=70){
        letterGrade='C';
    }
    else if(score >=60){
        letterGrade='D';
    }
    else{
        letterGrade='F';
    }
    return letterGrade;
}