#include <bits/stdc++.h>

using namespace std;
int w1;
int k1;
int w2;
int k2;
int lruch;
int main()
{
    cin >> w1;
    cin >> k1;
    cin >> w2;
    cin >> k2;

    if (w1 == w2 && k1 == k2)
    {
        cout << 0;
    }
    else if ((w1 + k1) % 2 != (w2 + k2) % 2)
    {
        cout << "NIE";
    }
    else if ((w1 - w2 == k1 - k2) || (w1 - w2 == k2 - k1))
    {
        cout << 1;
    }
    else
    {
        cout << 2;
    }

    return 0;
}
