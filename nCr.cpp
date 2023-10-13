#include <iostream>
using namespace std;
int fact(int n)
{

    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}
int main()
{
    freopen("input.txt", "r", stdin);
    int n, r, per, comb;
    cout << "enter the value of n:" << endl;
    cin >> n;
    cout << "enter the value of r:";
    cin >> r;
    freopen("output.txt", "w", stdout);
    int factn = fact(n);
    int factr = fact(r);
    int factnr = fact(n - r);
    comb = factn / (factr * factnr);
    per = factn / factnr;
    cout << endl
         << "the combination is: " << comb << endl;
    cout << "the permutation is: " << per;
    return 0;
}