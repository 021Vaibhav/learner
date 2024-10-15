#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k=0;
    cout << "enter your number";
    cin >> n;

    //lines
    for (i=0; i<n; i++){

        //spaces
        for (j=0; j<i; j++){
        cout << " ";
        }

        //nums
        for (k=i; k<n; k++){
        cout << (i+1);
        }
        cout << endl;

    }
    

    return 0;
}