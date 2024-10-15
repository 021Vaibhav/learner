#include <iostream>
using namespace std;

int main()
{
    int s,e,i,j;
char ch='A';
cout << "enter your ending number:\n";
cin >> e;

for (i=0; i<e; i++)
{
    for ( j=0; j<i+1; j++){
    //cout << i+1;
    cout << ch;
    }
    ch+=1;
    cout << endl;
}


return 0;
}