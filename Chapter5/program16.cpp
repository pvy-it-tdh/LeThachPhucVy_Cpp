#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outputFile;
    outputFile.open("demofile.txt");
    cout <<  "Now writing data to the file.\n";
    outputFile<< "Bach";
    outputFile <<"Beethoven";
    outputFile<< "Mozart";
    outputFile<< "Schubert";
    outputFile.close();
    cout << "Done.\n";
    return 0;
}