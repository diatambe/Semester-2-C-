#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"Enter 2 numbers :";
    cin >> a >> b;

    if (b == 0)
    {
        cout<<"Error : Division by 0 not allowed"<<endl;
    }
    else
    {
        int result = a / b;
        cout<<"Result : "<<result<<endl;
    }

    return 0;
}