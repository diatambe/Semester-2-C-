#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
         {
            throw 1;
        }

        int result = a / b;
        cout << "Result: " << result << endl;
    }
    catch (...) 
    {
        cout << "Error: Cannot divide by zero" << endl;
    }

    return 0;
}