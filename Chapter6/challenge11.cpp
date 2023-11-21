#include <iostream>
#include <limits> // For numeric_limits

using namespace std;

// Function prototypes
void getScore(double &score);
void calcAverage(double score1, double score2, double score3, double score4, double score5);
int findLowest(double score1, double score2, double score3, double score4, double score5);

int main() {
    double score1, score2, score3, score4, score5;

    // Get scores from the user
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    // Calculate and display the average of the four highest scores
    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

// Function to get a test score and validate it
void getScore(double &score) {
    do {
        cout << "Enter a test score: ";
        cin >> score;

        if (cin.fail() || score < 0 || score > 100) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a score between 0 and 100." << endl;
        } else {
            break; // Exit the loop if the input is valid
        }
    } while (true);
}

// Function to calculate and display the average of the four highest scores
void calcAverage(double score1, double score2, double score3, double score4, double score5) {
    int lowestScore = findLowest(score1, score2, score3, score4, score5);

    // Calculate average excluding the lowest score
    double average = (score1 + score2 + score3 + score4 + score5 - lowestScore) / 4.0;

    cout << fixed << setprecision(2);
    cout << "The average of the four highest scores is: " << average << endl;
}

// Function to find and return the lowest of the five scores
int findLowest(double score1, double score2, double score3, double score4, double score5) {
    int lowest = score1;
    if (score2 < lowest) lowest = score2;
    if (score3 < lowest) lowest = score3;
    if (score4 < lowest) lowest = score4;
    if (score5 < lowest) lowest = score5;

    return lowest;
}
