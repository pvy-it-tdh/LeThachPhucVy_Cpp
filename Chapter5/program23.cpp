#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{ 
    ifstream inputFile; 
    int number; 
    inputFile.open("BadListOfNumbers.txt"); 
    if (inputFile) 
    {  
    while (inputFile >> number) 
    { 
        cout << number << endl; 
    }
    } 
    else 
    { 
    cout << "Error opening the file.\n"; 
    } 
    return 0; 
}
