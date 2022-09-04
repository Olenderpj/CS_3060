
/*/////////////////////////////////////////////////////////////////////////////////////////////
 CLASS: CS 3060
 NAME: PJ OLENDER
 DATE: 09/03/2022
 ASSIGNMENT #: 15.11

 Course Grades
    In a course, a teacher gives the following tests and assignments:
        - A lab activity that is observed by the teacher and assigned a numeric score.
        - A pass/fail exam that has ten questions. The minimum passing score is 70.
        - An essay that is assigned a numeric score.
        - A final exam that has 50 questions.


         Write a class named CourseGrades. The class should have a member named grades
         that is an array of GradedActivity pointers. The grades array should have four elements,
         one for each of the assignments previously described. The class should have the
         following member functions:

         setlab:
             This function should accept the address of a GradedActivity
             object as its argument. This object should already hold the student's
             score for the lab activity. Element 0 of the grades array
             should reference this object.
         setPassFailExam:
             This function should accept the address of a PassFailExam
             object as its argument. This object should already hold the student's
             score for the pass/fail exam. Element 1 of the grades array
             should reference this object.
         setEssay:
             This function should accept the address of an Essay object
             as its argument. (See Programming Challenge 6 for the Essay
             class. If you have not completed Programming Challenge 6, use
             a GradedActivity object instead.) This object should already
             hold the student's score for the essay. Element 2 of the grades
             array should reference this object.
         setPassFailExam:
             This function should accept the address of a FinalExam object
             as its argument. This object should already hold the student's
             score for the final exam. Element 3 of the grades array should
             reference this object.
         print:
             This function should display the numeric scores and grades for
             each element in the grades array.
             Demonstrate the class in a program.


 /////////////////////////////////////////////////////////////////////////////////////////////*/


#include "GradedActivity.h"
#include "PassFailExam.h"
#include "FinalExam.h"
#include "CourseGrades.h"
#include "Essay.h"
using namespace std;

int main(){
    // Create Graded activity object
    GradedActivity lab(80);

    // Create pass fail exam object, 50 Qs 5 missed with min passing score 70
    PassFailExam exam(50,5,70);

    // Create essay object and set different points categories using fluent setters
    Essay essay;
    essay.setGrammarPoints(25)
        .setSpellingPoints(15)
        .setLengthPoints(20)
        .setContentPoints(30);

    // Create FinalExam object
    FinalExam finalExam(50,5);

    // Create CourseGrades object
    CourseGrades studentFinalGrades;

    // Store grades in course grades object using fluent setters (again)
    studentFinalGrades.setLab(&lab)
        .setPassFailExam(&exam)
        .setEssay(&essay)
        .setFinalExam(&finalExam);

    //Print grade information
    studentFinalGrades.print();
    return 0;
}
