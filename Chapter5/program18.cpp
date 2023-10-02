#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream outputFile;
    string name1,name2,name3;
    outputFile.open("Friends.txt");
    cout << "Enter the names of three friend.\n";
    cout << "Friend#1 : ";
    cin >> name1;
    cout << "Friend#2 : ";
    cin >> name2;
    cout << "Friend#3 : ";
    cin >> name3;
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    cout << "The names were saved to a file.\n";
    outputFile.close();
    return 0;
}