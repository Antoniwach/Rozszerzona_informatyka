#include <bits/stdc++.h>
using namespace std;
int n;
int suma;

int main()
{
    cin >> n;
    while(n > 0)
    {
        suma += n % 10;
        n /= 10;
    }
    cout << suma << endl;
}
