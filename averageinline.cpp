#include <iostream>
using namespace std;

inline void displayNum(int num)
{
    static int sum = 0, count = 0;
    sum += num;
    count++;
    cout << (sum / (float)count) << endl;
}

int main()
{
    displayNum(5);
    displayNum(8);
    displayNum(666);
}
