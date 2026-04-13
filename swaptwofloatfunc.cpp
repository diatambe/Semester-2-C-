#include <iostream>
using namespace std;

void swapFloat (float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

int main ()
{

float x = 5.5, y = 10.2;

cout<<"Before swap : "<<x<<" "<<y<<endl;
swapFloat(x,y);
cout<<"After swap: " <<x<<" "<<y<<endl;

return 0;
}