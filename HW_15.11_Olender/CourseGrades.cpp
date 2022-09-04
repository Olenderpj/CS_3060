//
// Created my PJ Olender on 09/03/2022
//

#include <iostream>
#include "CourseGrades.h"
using namespace std;

// Displays all Grades
void CourseGrades::print()const{
    cout << "\t\t\t\t\tFINAL GRADES\n" <<
    "----------------------------------------------------------" << endl;

    // Lab Score Display
    cout<<"Lab Score: "
        <<grades[LAB]->getScore()
        << "\t\t\t\tGrade: "<<grades[LAB]->getLetterGrade()<<endl;

    // Pass Fail Exam Grade Display
    cout<<"Pass/Fail Exam Score: "
        <<grades[PASS_FAIL_EXAM]->getScore()
        << "\tGrade: "<<grades[PASS_FAIL_EXAM]->getLetterGrade() << " (PASS / FAIL)" <<endl;

    // Essay Score Display
    cout<< "Essay Score: "
        << grades[ESSAY]->getScore()
        << "\t\t\t\tGrade: " << grades[ESSAY]->getLetterGrade() << endl;

    // Final Exam Grade Display
    cout<< "Final Exam Score: "
        << grades[FINAL_EXAM]->getScore()
        << "\t\tGrade: " << grades[FINAL_EXAM]->getLetterGrade() << endl;
}