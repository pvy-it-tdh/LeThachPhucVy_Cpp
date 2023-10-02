#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{ 
    ofstream outputFile;  
    int numberOfDays; 
    double sales; 
    cout << "For how many days do you have sales? "; 
    cin >> numberOfDays;  
    outputFile.open("Sales.txt"); 
    for (int count = 1; count <= numberOfDays; count++) 
    {    
    cout << "Enter the sales for day " << count << ": "; 
    cin >> sales; 

    } 
    outputFile.close(); 
    cout << "Data written to Sales.txt\n"; 
    return 0; 
} 
