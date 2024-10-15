#include <iostream>

using namespace std;

int main()
{
    int marks;
cout << "enter your marks" << endl;
cin >> marks;

if (marks>=90)
{
cout << "Grade A" << endl;
}
else if ((marks>90) || (marks>50))
{
cout << "Grade B" << endl;
}
else if ((marks>=33) || (marks==50))
{
cout << " Grade C" << endl;
}
else 
cout << "fail" << endl;

return 0;
}