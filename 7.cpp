#include <iostream>
using namespace std;
int main(){
    int i,n;
bool isprime=true;

cout << "enter your number\n";
cin >> n;

for (i=2; i<=n-1; i++)
{
    if (n%i==0){
        isprime=false;
        break;
    }
}
if ( isprime == true )
{
    cout << "number is prime\n";
}
else   {  cout << "number is not prime\n";
}
return 0;
}

