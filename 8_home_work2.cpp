#include<iostream>
using namespace std;
int main()
{
int i,m,n,product=1;
cout << "enter your number:";
cin >> n;
for (i=1; i<=n; i++) {
product *= i;
}

cout << "product:" << product << endl;
    return 0;
}