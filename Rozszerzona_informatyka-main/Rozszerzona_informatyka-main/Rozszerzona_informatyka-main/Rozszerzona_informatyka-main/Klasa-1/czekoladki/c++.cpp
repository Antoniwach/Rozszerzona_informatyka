#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    if(k >= n * m)
        cout << "NIE" << endl;
    else if (k % n == 0 || k % m == 0)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;

}
