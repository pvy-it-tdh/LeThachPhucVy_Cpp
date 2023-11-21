#include<iostream>
using namespace std;
int main()
{
    char s=1;
  for(int i=1;i<=127;i++)
  {
     cout << s;
     if (i%16==0)
     {
        cout << s << endl;
     }
  }
    return 0;
}