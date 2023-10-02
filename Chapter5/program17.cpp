#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outputFile;
    int number1,number2,number3;
    outputFile.open("Numbers.txt");
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter another number: ";
    cin >> number2;
    cout <<  "One more time. Enter a number: ";
    cin >> number3;
    outputFile<< number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    outputFile.close();
    cout << "Done.\n";
    return 0;
}