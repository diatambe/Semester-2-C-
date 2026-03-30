#include <iostream>
using namespace std;
class Distance
{
    public:
    int feet, inch;
    Distance(int f, int i)
    {
        this->feet =f;
        this->inch =i;
        cout <<"\nThe initial value of Feet & Inches : " <<feet<< " "<<inch;
    }
    void operator--()

    {
        feet--;
        inch--;
        cout<<"\nThe initial value of Feet & Inches : " <<feet<< " "<<inch;
    }
};
int main()
{
    Distance d1(8, 9);
    --d1;
}