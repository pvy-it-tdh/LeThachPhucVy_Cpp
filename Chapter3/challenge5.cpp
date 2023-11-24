#include <iostream>
#include <iomanip>

int main() {
    // Declare variables to store the number of males and females
    int numMales, numFemales;

    // Ask the user for the number of males and females
    cout << "Enter the number of males in the class: ";
    cin >> numMales;
    cout << "Enter the number of females in the class: ";
    cin >> numFemales;
    // Calculate the total number of students
    int totalStudents = numMales + numFemales;

    // Calculate the percentage of males and females
    double percentageMales = (static_cast<double>(numMales) / totalStudents) * 100.0;
    double percentageFemales = (static_cast<double>(numFemales) / totalStudents) * 100.0;

    // Display the percentages with one decimal place
    cout << fixed << setprecision(1);
    cout << "Percentage of males in the class: " << percentageMales << "%" << endl;
    cout << "Percentage of females in the class: " << percentageFemales << "%" << endl;
    return 0;
}