#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // Declare variables for primary colors and the resulting secondary color
    string color1, color2, secondaryColor;

    // Prompt the user to enter the first primary color
    cout << "Enter the first primary color (red, blue, or yellow): ";
    cin >> color1;

    // Prompt the user to enter the second primary color
    cout << "Enter the second primary color (red, blue, or yellow): ";
    cin >> color2;

    // Check the combinations of primary colors and calculate the resulting secondary color
    if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) 
    {
        secondaryColor = "purple";
    } 
    else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red"))
     {
        secondaryColor = "orange";
    } 
    else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) 
    {
        secondaryColor = "green";
    } 
    else 
    {
        cout << "Error: Invalid color combination. Please enter red, blue, or yellow." << endl;
        return 1; // Exit the program with an error code
    }

    // Display the resulting secondary color
    cout << "The resulting secondary color is: " << secondaryColor << endl;

    return 0;
}