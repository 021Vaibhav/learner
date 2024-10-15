#include <iostream>
using namespace std;

int main()
{
int i,m,n,sum=0;
cout << "enter your starting number:";
cin >> n;
cout << "enter your ending number";
cin >> m;
for (i=n; i<=m; i++){
if (i%3==0 ) {
sum += i;
}
}
cout << "sum:" << sum << endl;
    return 0;
}