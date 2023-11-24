#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // test scores and the sum of scores
    double score1, score2, score3, score4, score5;
    double sumOfScores, averageScore;
    // enter five test scores
    cout << "Enter the first test score: ";
    cin >> score1;
    cout << "Enter the second test score: ";
    cin >> score2;
    cout << "Enter the third test score: ";
    cin >> score3;
    cout << "Enter the fourth test score: ";
    cin >> score4;
    cout << "Enter the fifth test score: ";
    cin >> score5;
    // Calculate the sum of test scores
    sumOfScores = score1 + score2 + score3 + score4 + score5;
    // Calculate the average test score
    averageScore = sumOfScores / 5.0;
    // the result
    cout << "Average test score: " << fixed << setprecision(1) << averageScore << endl;
    return 0;
}