#include <iostream>
using namespace std;
int fact(int x)
{
    int fac = 1;
    for (int i = 1; i <= x; i++)
    {
        fac = fac * i;
    }
    return fac;
}
int comb(int n, int r)
{
    int factn = fact(n);
    int factr = fact(r);
    int factnr = fact(n - r);
    int com = factn / (factr * factnr);
    return com;
}

int main()
{
    int n, r, i, j;
    cout << "enter the value of n:";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n - i; k++)
        {
            cout << " ";
        }
        for (j = 0; j <= i; j++)
        {

            int pas = comb(i, j);

            cout << pas<<" ";
        }

        cout << endl;
    }

    return 0;
}