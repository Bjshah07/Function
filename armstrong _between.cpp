#include <iostream>
#include <cmath>
using namespace std;
int arm(int a)
{
    int rem = 0, b, sum = 0;
    for (; a != 0;)
    {
        rem = a % 10;
        b = pow(rem, 3);
        sum = sum + b;
        a = a / 10;
    }

    if (sum == a)
    {
        return sum;
    }
}
int main()
{
    int n, c;
    cout << "enter the no.";
    cin >> n;
    cout << "enter the no.";
    cin >> c;
    // int i = n;
    for (int i = n; i <= c; i++)
    {

        int armstrong = arm(i);
        if (armstrong == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}