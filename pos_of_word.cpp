#include <iostream>
using namespace std;
void position(string s, char ch, int &a, int &b)
{
    for (int i = 0; i < sizeof(s); i++)
    {
        if (s[i] == ch)
        {
            a = i;
            break;
        }
    }
    for (int i = s.size(); i > 0; i--)
    {
        if (s[i] == ch)
        {
            b = i;
            break;
        }
    }
}
int main()
{
    string s = "bbbabababbaabb";
    char ch = 'a';
    int f1 = -1;
    int f2 = -1;
    int *p = &f1;
    int *p1 = &f2;
    position( s, ch, *p, *p1);
    cout<<*p<<" "<<*p1<<endl;
    cout<<f1<<" "<<f2;
    return 0;
}