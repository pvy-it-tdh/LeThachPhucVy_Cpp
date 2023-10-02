#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() 
{ 
    int dvdCount = 1;
    int numDVDs; 
    double total = 0.0; 
    char current; 
    cout << "How many DVDs are being rented? "; 
    cin >> numDVDs; 
    do 
    { 
    if ((dvdCount % 3) == 0) 
    { 
    cout << "DVD #" << dvdCount << " is free!\n"; 
    continue; // Immediately start the next iteration 
    } 
    cout << "Is DVD #" << dvdCount; 
    cout << " a current release? (Y/N) "; 
    cin >> current; 
    if (current == 'Y' || current == 'y') 
    total += 3.50; 
    else 
    total += 2.50; 
    } while (dvdCount++ < numDVDs);
    cout << fixed << showpoint << setprecision(2); 
    cout << "The total is $" << total << endl; 
    return 0; 
}
