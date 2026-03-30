#include <iostream>
using namespace std;
class Outer
{
    public:
    int outData;

    class Inner
    {
        public:
        void display()
        {
            cout<<"This is the Inner class"<<endl;
        }
    };

    void showOuter()
    {
        cout<<"This is the outer class"<<endl;
    }
};

int main()
{
    Outer::Inner innerObj;
    innerObj.display();

    Outer outerObj;
    outerObj.showOuter();
}