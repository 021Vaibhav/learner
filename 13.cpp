#include <iostream>
using namespace std;

int main()
{
int n;
int i,j,k,l;

cout << "enter your number\n";
cin >> n;

for (i=0; i<n; i++){

    //spaces
    for (j=0; j<n-i-1; j++)
    {
    cout << " ";
    }

    //nums
    for (k=1; k<=i+1; k++){
        cout << k;
    }

        //second loop
        for (l=i; l>0; l--)
        {
            cout << l;
        
        }
        cout << endl;
    }



return 0;
}