#include<iostream>
#include<iomanip> 
using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    double totalGradePoints = 0.0;
    double totalCredits = 0.0;

    for (int i = 1; i <= numCourses; i++) {
        double grade, credit;
        cout << "\nEnter grade for course " << i << ": ";
        cin >> grade;
        cout << "Enter credit hours for course " << i << ": ";
        cin >> credit;

        totalGradePoints += grade * credit;
        totalCredits += credit;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\n";
    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalGradePoints;
    cout << "\nYour CGPA is: " << cgpa << endl;
    cout << "\n";

    return 0;
}
