#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    int x = 10;
    int *y = &x;
    int **z = &y;
    int ***w = &z;
    int ****v = &w;
    freopen("output.txt", "w", stdout);

    cout << &y << endl; // FOR ADDRESS OF Y
    cout << y << endl;  // FOR ADDRESS OF X
    cout << *y << endl; // FOR  VALUE OF X

    cout << &z << endl;  // FOR ADDRESS OF Z
    cout << z << endl;   // FOR ADDRESS OF Y
    cout << *z << endl;  // FOR ADDRESS OF X
    cout << **z << endl; // FOR VALUE OF X

    cout << &w << endl;   // FOR ADDRESS OF W
    cout << w << endl;    // FOR ADDRESS OF Z
    cout << *w << endl;   // FOR ADDRESS OF Y
    cout << **w << endl;  // FOR ADDRESS OF X
    cout << ***w << endl; // FOR VALUE OF X

    cout << &v << endl;   // FOR ADDRESS OF V
    cout << v << endl;    // FOR ADDRESS OF W
    cout << *v << endl;   // FOR ADDRESS OF Z
    cout << **v << endl;  // FOR ADDRESS OF Y
    cout << ***v << endl; // FOR ADDRESS OF X
    cout << ****v;        // FOR VALUE OF X
}