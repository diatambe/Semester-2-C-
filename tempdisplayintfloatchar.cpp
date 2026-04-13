#include <iostream>
using namespace std;

template <class T>
void display(T value)
{
    cout<<"Value : "<<value<<endl;
}

int main()
{
    int a = 10;
    float x = 20.5;
    char c = 'D';

    display (a);
    display(x);
    display (c);

    return 0;
}