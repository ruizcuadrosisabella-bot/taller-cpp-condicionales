#include <iostream>
#include <string>

int main() {
    int score;
    std::string grade;
    std::string status;

    std::cout << "Enter the student's score (0 - 100): ";
    std::cin >> score;

    // Range validation
    if (score < 0 || score > 100) {
        std::cout << "Error: the score must be between 0 and 100." << "\n";
        return 0;
    }

    // Grading scale logic
    if (score >= 90) {
        grade = "A";
    } 
    else if (score >= 80) {
        grade = "B";
    } 
    else if (score >= 70) {
        grade = "C";
    } 
    else if (score >= 60) {
        grade = "D";
    } 
    else {
        grade = "F";
    }

    // Pass/Fail check
    if (score >= 60) {
        status = "Passed";
    } else {
        status = "Failed";
    }

    std::cout << "\nGrade: " << grade << "\n";
    std::cout << "Status: " << status << "\n";

    return 0;
}
