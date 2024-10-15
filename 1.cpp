#include <iostream>

using namespace std;

int main()
{
       int a,b=++b,sum,subtract,product,divsion,modulus;
       cout << "enter two number a,b" << endl;
       cin >> a;
       cin >> b;

       sum=a+b;
       subtract=a-b;
       product=a*b;
       divsion=a/b;
       modulus=a%b;

       cout << "sum of two number = " << sum << endl;
       cout << "subtract of two number = " << subtract << endl;
       cout << "product of two number = " << product << endl;
       cout << "divsion of two number = " << divsion << endl;
       cout << "modulus of two number = " << modulus << endl;


return 0;
}
