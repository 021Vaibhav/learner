#include <iostream>
using namespace std;

int main()
{
    int s,e,i,j;
cout << "enter your staring number:\n";
cin >> s;

cout << "enter your ending number:\n";
cin >> e;

for (i=s; i<=e; i++)
{
for ( j=s; j<=e; j++){
cout << j << " ";
}
cout << endl;
}
return 0;
}