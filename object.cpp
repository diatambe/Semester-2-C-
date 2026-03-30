#include <iostream>
using namespace std;

class student
{
    int roll_no, marks;
    public:
    void getdata()
    {
        cout << "Enter the roll no: ";
        cin >> roll_no;
        cout << "Enter the marks: ";
        cin >> marks;
    }

    void displaydata() 
    {
        cout << "Student data = " << endl;
        cout << roll_no << "  " << marks;
    }
};

int main()
{
    student s;
    s.getdata();
    s.displaydata();
}
