#include <bits/stdc++.h>
using namespace std;
long long liczba;
long long n;
long long odwrocona = 0;
int ile;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> ile;
    while(ile > 0)
    {
        cin >> liczba;
        n = liczba;
        while (n > 0)
        {
            odwrocona = odwrocona * 10 + n % 10;
            n /= 10;
        }
        if(liczba == odwrocona)
        {
            cout << "TAK" << endl;
        }
        else cout << "NIE" << endl;
        ile--;
        odwrocona = 0;
    }
}
