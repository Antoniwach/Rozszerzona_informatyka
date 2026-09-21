#include <bits/stdc++.h>
using namespace std;
int odwrocona;
int ostatniaCyfra;
int wynik;
int k;
int aktualnaLiczba;
int liczbaDoSprawdzenia;
int main()
{
    cin >> k;
    aktualnaLiczba = k;
    while (true)
    {
        liczbaDoSprawdzenia = aktualnaLiczba;
        int odwrocona = 0;
        while (liczbaDoSprawdzenia > 0)
        {
            ostatniaCyfra = liczbaDoSprawdzenia % 10;
            odwrocona = odwrocona * 10 + ostatniaCyfra;
            liczbaDoSprawdzenia = liczbaDoSprawdzenia / 10;
        }
        if (aktualnaLiczba == odwrocona)
        {
            break;
        }
        aktualnaLiczba = aktualnaLiczba + 1;
    }
    wynik = aktualnaLiczba - k;
    cout << wynik << endl;
}

