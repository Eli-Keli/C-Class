/*
Author: Eli Keli
Date: September 12
Description: Basics of C++
Registration Number: BSE-05-0238/2023
*/

// EXERCISE 3
// create a grading system using the following conditions
/*
    Score       Grade
    70-100       A
    60-69        B
    50-59        C
    40-49        D
    0-39         Fail
*/
// prompt the user 3 subjects, calculate the average score, grade the average score (use switch case)

#include <iostream>
using namespace std;

int main() {
    int subject1, subject2, subject3, average;
    char grade;
    
    // Prompt the user to enter the scores of 3 subjects
    cout << "Enter the score of Subject 1: ";
    cin >> subject1;
    
    cout << "Enter the score of Subject 2: ";
    cin >> subject2;
    
    cout << "Enter the score of Subject 3: ";
    cin >> subject3;
    
    // Calculate the average score
    average = (subject1 + subject2 + subject3) / 3;
    
    // Grade the average score using switch case
    switch (average / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'Fail';
    }
    
    // Display the average score and grade
    cout << "Average Score: " << average << endl;
    cout << "Grade: " << grade << endl;
    
    return 0;
}
