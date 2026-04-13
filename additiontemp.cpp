#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{

int  a = 5, b = 20;
float x = 1.10, y = 2.20;

cout<<"Integer value :"<<a+b<<endl;
cout<<"Float value :"<<x+y<<endl;

return 0;
}