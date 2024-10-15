#include <iostream>
using namespace std;

int main()
{
int s,e,j,i;
int num=1;

//s=3;
//e=5;

cout << "number of lines:\n";
cin >> s;

cout << "number in lines:\n";
cin >> e;

for (i=0; i<s; i++)
{
for (j=0; j<e; j++){
cout << num << " ";
num +=1;
}
cout << endl;
}
cout << "after pattern:" << num << endl;
return 0;
}