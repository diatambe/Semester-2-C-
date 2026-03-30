#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tablenumber, numberofitems;
    string name;
    long long contactnumber;

    cout << "enter name" << endl;
    cin >> name;

    cout << "enter table number" << endl;
    cin >> tablenumber;

    cout << "enter contact number" << endl;
    cin >> contactnumber;

    cout << "enter the number of items ordered" << endl;
    cin >> numberofitems;

    string item[10];
    int qty[10];
    int price[10];
    int total[10];

    for(int i = 0; i < numberofitems; i++)
    {
        cout << "enter item name " << i+1 << endl;
        cin >> item[i];

        cout << "enter quantity " << i+1 << endl;
        cin >> qty[i];

        cout << "enter price " << i+1 << endl;
        cin >> price[i];

        total[i] = qty[i] * price[i];
    }

    int sum = 0;
    for(int i = 0; i < numberofitems; i++)
    {
        sum = sum + total[i];
    }

    int discount = 0;
    if(sum >= 5000)
        discount = sum * 0.2;
    else if(sum >= 3000)
        discount = sum * 0.1;
    else if(sum > 1000)
        discount = sum * 0.05;

    cout << "---------Hotel Bill----------" << endl;
    cout << "Table Number: " << tablenumber << endl;
    cout << "Customer name: " << name << endl;
    cout << "Customer contact: " << contactnumber << endl;
    cout << "Order detail:" << endl;
    cout << "Item  Qty  Price  Total" << endl;
    cout << "--------------------" << endl;

    for(int i = 0; i < numberofitems; i++)
    {
        cout << item[i] << "   " << qty[i] << "    "
             << price[i] << "     " << total[i] << endl;
    }

    cout << "Total amount: " << sum << endl;
    cout << "Discount: -" << discount << endl;
    cout << "Final amount: " << sum - discount << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}
