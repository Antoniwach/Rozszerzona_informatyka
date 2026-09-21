#include <bits/stdc++.h>
using namespace std;
int z;
long long liczba;
string binarna = "";
int reszta;
char cyfra;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> z;
    for(int i; i < z; i++)
    {
        cin >> liczba;
        if(liczba == 0)
        {
            cout << "0" << endl;
            continue;
        }
        while (liczba > 0)
        {
            reszta = liczba % 2;
            char cyfra = '0' + reszta;
            binarna = cyfra + binarna;
            liczba = liczba / 2;
        }
        cout << binarna << endl;
        binarna = "";
    }
}
