//
// Created by PJ Olender on 09/03/2022
//

#include "PassFailActivity.h"
char PassFailActivity::getLetterGrade() const{
    char letterGrade;
    if(score>=minPassingScore){
        letterGrade='P';
    }
    else{
        letterGrade='F';
    }
    return letterGrade;
}