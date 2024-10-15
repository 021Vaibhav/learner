#include <iostream>
using namespace std;

int main()
{
    int s,e,i,j;
char ch='A';
cout << "enter your ending number:\n";
cin >> e;

for (i=0; i<e; i++)
{
    for ( j=i; j>=1; j--){
        cout << j;

        //ch='A'+j;
    //cout << ch ;

    
    
    }
    //ch+=1;
    cout << endl;
}

return 0;
}