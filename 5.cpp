#include <iostream>
using namespace std;

int main() {
int i,sum=0,start,end;

cout << "enter your starting number";
cin >> start;
cout << "enter your ending number";
cin >> end;
for (i = start; i <= end; i++) {
    //sum+=i;
    // we can add break statment to stop the loop
    //now here if we put value for that 5 loop will break
   //if ( i==5)
   // break;
   cout << i ;
}
//cout << "sum=" << sum << endl;
    return 0;
}
