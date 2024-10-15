#include <iostream>
using namespace std;

int main()
{
int n,i,j;
int num=1;
char alp='A';
cout << "enter your number:\n";
cin >> n;

for (i=0; i<=n; i++)
{
for ( j=0; j<=i; j++){
//cout << "* " ;

cout << num ;
//num+=1;

//cout << alp;
//alp+=1;

}
num+=1;
//alp+=1;
cout << "\n";

}
cout << endl;
return 0;
}