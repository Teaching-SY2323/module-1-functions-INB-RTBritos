#include <iostream>
using namespace std;

int Add2Values(int, int);

int main()
{
    int x, y;
    cout << "-- Add 2 Values --\n" << "Enter x Values: ";
    cin >> x;
    cout << "Enter y Value: ";
    cin >> y;

    cout << "When you add the 2 Values the result is: ";

    cout << Add2Values(x, y);

    return 0;
}

int Add2Values(int x, int y)
{
    // make your code here

    int sum;
    sum = x + y;
    return sum;
}
