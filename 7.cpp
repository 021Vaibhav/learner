#include <iostream>
using namespace std;

int main()
{
int n,i,j;
char ch='A';
cout << "enter your number:\n";
cin >> n;

for (i=0; i<=n; i++)
{
for ( j=i+1; j>0; j--){
   ch='A'+j-1;
   cout << ch << " ";

   //cout << j;

}
cout << endl;
}

return 0;
}