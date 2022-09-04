//
// Created by PJ Olender on 9/3/22.
//

#ifndef HW_15_11_OLENDER_PASSFAILACTIVITY_H
#define HW_15_11_OLENDER_PASSFAILACTIVITY_H

#include "GradedActivity.h"

class PassFailActivity : public GradedActivity{
protected:
    double minPassingScore;
public:
    PassFailActivity() : GradedActivity(){
        minPassingScore=0;
    }
    PassFailActivity(double min):GradedActivity(){
        minPassingScore=min;
    }

    void setMinPassingScore(double min){
        minPassingScore=min;
    }
    double getMinPassingScore()const{
        return minPassingScore;
    }

    char getLetterGrade()const;

};


#endif //HW_15_11_OLENDER_PASSFAILACTIVITY_H
