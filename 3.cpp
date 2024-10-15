#include <iostream>
using namespace std;
int main()
{
char ch;
cout << "enter your ch" << endl;
cin >> ch;

if ((ch >= 'a') && (ch <= 'z'))
{
    cout << " lowercase ch" << endl;
}
else 
cout << "upercase ch" << endl; 

    return 0;
}