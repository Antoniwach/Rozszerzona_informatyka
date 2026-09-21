#include <bits/stdc++.h>
using namespace std;
int a;
int b;
int c;
int main()
{
    cin >> a;
    cin >> b;
    cin >> c;
    if(a + b <= c || b + c <= a || c + a <= b)
    {
        cout << "NIE";
    }
    else cout << "TAK";
}

