//
// Created by PJ Olender on 09/03/2022
//

#ifndef LAB15_11_ESSAY_H
#define LAB15_11_ESSAY_H
#include "GradedActivity.h"

class Essay : public GradedActivity {
private:
    double grammarPoints;
    double spellingPoints;
    double lengthPoints;
    double contentPoints;
public:

    Essay(){
        grammarPoints=0;
        spellingPoints=0;
        lengthPoints=0;
        contentPoints=0;
    }

    // Modifiers
    Essay& setGrammarPoints(double);
    Essay& setSpellingPoints(double);
    Essay& setLengthPoints(double);
    Essay& setContentPoints(double);

    // Accessors
    double getGrammarPoints()const{
        return grammarPoints;
    }
    double getSpellingPoints()const{
        return spellingPoints;
    }
    double getLengthPoints()const{
        return lengthPoints;
    }
    double getContentPoints()const{
        return contentPoints;
    }

    virtual double getScore();
    virtual char getLetterGrade();
}; // END Essay Class


#endif //LAB15_11_ESSAY_H
