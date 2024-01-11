#include <iostream>
using namespace std;

int main() {
    const int numStudents = 10;
    const int numSemesters = 5;

    // Initialize arrays to store student names and marks
    string studentNames[numStudents];
    double studentMarks[numStudents][numSemesters];
    double studentAverages[numStudents];

    // Input student names and marks
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> studentNames[i];

        double totalMarks = 0.0;
        bool isValidStudent = true;

        for (int j = 0; j < numSemesters; ++j) {
            cout << "Enter marks for semester " << j + 1 << " (between 1 to 100) for " << studentNames[i] << ": ";
            cin >> studentMarks[i][j];

            // Check if marks are within the valid range
            if (studentMarks[i][j] < 1 || studentMarks[i][j] > 100) {
                cout << "Invalid marks! Marks should be between 1 to 100." << endl;
                isValidStudent = false;
                break;
            }

            totalMarks += studentMarks[i][j];
        }

        // Calculate the average marks for each student
        if (isValidStudent) {
            studentAverages[i] = totalMarks / numSemesters;
        } else {
            studentAverages[i] = 0; // Mark as ineligible
        }
    }

    // Display eligible and ineligible students
    cout << "\nEligible Students:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        if (studentAverages[i] >= 70) {
            bool isEligible = true;
            for (int j = 0; j < numSemesters; ++j) {
                if (studentMarks[i][j] < 60) {
                    isEligible = false;
                    break;
                }
            }
            if (isEligible) {
                cout << "Name: " << studentNames[i] << ", Average Marks: " << studentAverages[i] << endl;
            }
        }
    }

    cout << "\nIneligible Students:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        if (studentAverages[i] < 70) {
            cout << "Name: " << studentNames[i] << ", Average Marks: " << studentAverages[i] << endl;
        }
    }

    return 0;
}
