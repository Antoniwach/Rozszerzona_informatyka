#include <bits/stdc++.h>
using namespace std;
int n;
int dziesiotki;
int jednosci;
int licznik;
int main()
{
    cin >> n;
    if(n > 50 || n < 0)
    {
        cout << "0" << endl;
        return 0;
    }
    for(int i = 99; i >= -99; i--)
    {
        dziesiotki = i / 10;
        jednosci = i % 10;

        if(dziesiotki % 2 != 0 && jednosci % 2 != 0)
        {
            cout << i << endl;
            licznik++;
        }
        if(licznik == n)
        {
            return 0;
        }
    }

}
