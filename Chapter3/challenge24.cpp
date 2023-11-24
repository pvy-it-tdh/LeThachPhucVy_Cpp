#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables to store user input
    string name, city, college, profession, animal, petName;
    int age;

    // Get user input
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter a city name: ";
    getline(cin, city);
    cout << "Enter a college name: ";
    getline(cin, college);
    cout << "Enter a profession: ";
    getline(cin, profession);
    cout << "Enter a type of animal: ";
    getline(cin, animal);
    cout << "Enter a pet's name: ";
    getline(cin, petName);
    cout << "Enter your age: ";
    cin >> age;
    // Display the story with user input
    cout << "There once was a person named " << name << " who lived in " << city << ".\n"
         << "At the age of " << age << ", " << name << " went to college at " << college << ".\n"
         << name << " graduated and went to work as a " << profession << ".\n"
         << "Then, " << name << " adopted a(n) " << animal << " named " << petName << ".\n"
         << "They both lived happily ever after!" << endl;

    return 0;
}
