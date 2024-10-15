#include <iostream>
using namespace std;

int main()
{
int s,e,j,i;
char ch='A';
cout << "enter number of lines:\n";
cin >> s;

cout << "enter your ending number:\n";
cin >> e;
for ( i=0; i<s; i++){
//char ch='A';
for ( j=0; j<e; j++){
cout<< ch << " ";
ch = ch+1;
}
cout << endl;

}
return 0;
}