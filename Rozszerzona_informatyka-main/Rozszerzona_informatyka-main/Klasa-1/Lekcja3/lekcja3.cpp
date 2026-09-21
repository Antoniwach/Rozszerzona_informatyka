#include <bits/stdc++.h>
using namespace std;
int n;
int m;
int k;
int main()
{
     cin >> n;
     cin >> m;
     cin >> k;
     if(k < ( n * m))
    {
        if(k % n == 0 || (k % m == 0))
        {
            cout<< "TAK";
        }
        else cout << "NIE";
    }
    else cout << "NIE";
}
