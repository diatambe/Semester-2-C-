#include <iostream>
using namespace std;

template <class T>
void swapValues (T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main ()
{
    int a = 1, b = 2;

    cout<<"Before swap: "<<a<<" "<<b<<endl;
    swapValues(a, b);
    cout<<"After swap: "<<a<<" "<<b<<endl;

    float x = 1.5, y = 6.7;
    cout<<"Before swap: "<<x<<" "<<y<<endl;
    swapValues(x, y);
    cout<<"After swap: "<<x<<" "<<y<<endl;

    return 0;
}