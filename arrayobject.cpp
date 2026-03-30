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
    cout<<"Welcome to object oriented programming"<<endl;
    student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        s[i].getdata();
    }
    cout<<"You have entered below student details";
    for(i=0;i<5;i++)
    {
        s[i].displaydata();
    }
}
