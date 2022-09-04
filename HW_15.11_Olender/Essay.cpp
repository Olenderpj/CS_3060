#include <iostream>
#include "Essay.h"
using namespace std;


Essay& Essay::setGrammarPoints(double p){
    if(p<0 || p>30){
        cout<<"Invalid Number of Grammer points";
        exit(EXIT_FAILURE);
    }
    grammarPoints=p;
    score+=grammarPoints;
    return *this;
}

Essay& Essay::setSpellingPoints(double p){
    if(p<0 || p>20){
        cout<<"Invalid Number of Spelling points";
        exit(EXIT_FAILURE);
    }
    spellingPoints=p;
    score+=spellingPoints;
    return *this;
}

Essay& Essay::setLengthPoints(double p){
    if(p<0 || p>20){
        cout<<"Invalid Number of length points";
        exit(EXIT_FAILURE);
    }
    lengthPoints=p;
    score+=lengthPoints;
    return *this;
}

Essay& Essay::setContentPoints(double p){
    if(p<0 || p>30){
        cout<<"Invalid Number of content points";
        exit(EXIT_FAILURE);
    }
    contentPoints=p;
    score+=contentPoints;
    return *this;
}

double Essay::getScore(){
    return grammarPoints+spellingPoints+lengthPoints+contentPoints;
}
char Essay::getLetterGrade(){
    cout<<"INSIDE GET LETTER GRADE";
    score=getScore();
    return GradedActivity::getLetterGrade();
}