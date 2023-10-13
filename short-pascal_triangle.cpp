#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "enter the no.";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n - i; k++)
        {
            cout << " ";
        }
        int x = 1;
        cout << x << " ";
        for (j = 0; j < i; j++)
        {
            x = x * (i - j) / (j + 1);
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}