#include <iostream>
using namespace std;
int main() {
    // Constants
    const int COOKIES_PER_BAG = 30;    // Number of cookies in a bag
    const int SERVINGS_PER_BAG = 10;   // Number of servings in a bag
    const int CALORIES_PER_SERVING = 300;  // Calories per serving

    // Variables
    int cookiesEaten;

    // Ask the user to input the number of cookies eaten
    cout << "Enter the number of cookies you actually ate: ";
    cin >> cookiesEaten;

    // Calculate the total calories consumed
    double totalCaloriesConsumed = (static_cast<double>(cookiesEaten) / COOKIES_PER_BAG) * (SERVINGS_PER_BAG * CALORIES_PER_SERVING);

    // Display the result
    cout << "Total calories consumed: " << totalCaloriesConsumed << " calories" << endl;

    return 0;
}