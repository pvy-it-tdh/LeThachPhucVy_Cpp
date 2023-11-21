#include<iostream>
using namespace std;
int main()
{
    int number;
    int smallest=INT_MIN;
    int largest=INT_MAX;
    while(true)
    {
        cin >> number;
        if (number ==-99)
        {
            break;
        }
        if(number<smallest)
        {
            smallest=number;

        }
        if(number>largest)
        {
           largest=number;
        }
       
    }
    cout << " so lon nhat trong chuoi "<< largest;
    cout << " so nho nhat trong chuoi "<< smallest;
    return 0;
}