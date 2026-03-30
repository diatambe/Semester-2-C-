#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    int i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime && n > 1)
    {
        cout << "Given number is a prime number";
    }
    else
    {
        cout << "Given number is not a prime number";
    }

    return 0;
}
