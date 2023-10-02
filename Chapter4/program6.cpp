// This program display an object's weight
#include <iostream>
using namespace std;

int main() 
{
    // Constants for acceleration due to gravity and weight limits
    const double GRAVITY = 9.8; // Acceleration due to gravity in m/s^2
    const double HEAVY_LIMIT = 1000.0; // Weight limit for "too heavy" in newtons
    const double LIGHT_LIMIT = 10.0; // Weight limit for "too light" in newtons

    // Declare variables for mass and weight
    double mass, weight;

    // Ask the user to enter the mass of the object in kilograms
    cout << "Enter the mass of the object (in kilograms): ";
    cin >> mass;

    // Calculate the weight using the formula: weight = mass * gravity
    weight = mass * GRAVITY;

    // Display the calculated weight
    cout << "Weight of the object: " << weight << " newtons" << endl;

    // Check if the object is too heavy or too light and display messages accordingly
    if (weight > HEAVY_LIMIT)
    {
        cout << "The object is too heavy." << endl;
    } else if (weight < LIGHT_LIMIT)
    {
        cout << "The object is too light." << endl;
    }
    return 0;
}