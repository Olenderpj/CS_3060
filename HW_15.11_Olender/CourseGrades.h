//
// Created by PJ Olender on 8/30/22.
//

#ifndef HW_15_11_OLENDER_COURSEGRADES_H
#define HW_15_11_OLENDER_COURSEGRADES_H

#include "GradedActivity.h"
#include "PassFailActivity.h"
#include "FinalExam.h"
#include "Essay.h"
using namespace std;

// Hard Code the array locations for each sub class
const int NUM_GRADES =4;
const int LAB = 0;
const int PASS_FAIL_EXAM = 1;
const int ESSAY = 2;
const int FINAL_EXAM = 3;

class CourseGrades{
private:
    GradedActivity *grades[NUM_GRADES];

public:
    CourseGrades(){
        for(int i=0; i < NUM_GRADES;i++){
            grades[i]= nullptr;
        }
    }// Default constructor

    // Modifiers
    CourseGrades& setLab(GradedActivity *activity){
        grades[LAB]=activity;
        return *this;
    }

    CourseGrades& setPassFailExam(PassFailActivity *exam){
        grades[PASS_FAIL_EXAM]=exam;
        return *this;
    }
    CourseGrades& setEssay(Essay *essay){
        grades[ESSAY]=essay;
        return *this;
    }
    CourseGrades& setFinalExam(FinalExam *finalExam){
        grades[FINAL_EXAM]=finalExam;
        return *this;
    }
    void print() const;
}; // END CourseGrades Class


#endif //HW_15_11_OLENDER_COURSEGRADES_H
