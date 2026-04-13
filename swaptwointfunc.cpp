#include <iostream>
using namespace std;

void swapInt(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
 {
    int x = 5, y = 10;

    cout << "Before Swap: " << x << " " << y << endl;
    swapInt(x, y);
    cout << "After Swap: " << x << " " << y << endl;

    return 0;
}