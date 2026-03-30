#include <iostream>
using namespace std;

int main ()
{
    float maths, cpp, ep, avg;
    cout <<"Enter marks of maths";
    cin >> maths;
    cout <<"Enter marks of cpp";
    cin >> cpp;
    cout <<"Enter marks of ep";
    cin >> ep;
    avg = maths + cpp + ep / 3;
    cout <<"Average of 3 Marks are" << maths << cpp << ep << " is " << avg;  
    
}