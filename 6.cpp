#include <iostream>
using namespace std;
// of even and odd number sum
int main (){

int i,sum=0,start,end;

cout << "enter your starting number";
cin >> start;
cout << "enter your ending number";
cin >> end;
for (i = start; i <= end; i++) {
 if (i%2 != 0){
    sum+=i;

 }
}
cout << " oddsum=" << sum << endl;
return 0;
}

