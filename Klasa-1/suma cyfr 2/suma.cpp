#include <bits/stdc++.h>
using namespace std;
int n;
int nsuma;
int suma;
int main()
{
    cin >> n;
    while(n > 0)
    {
        nsuma += n % 10;
        n /= 10;
    }
    while(nsuma > 0)
    {
        suma += nsuma % 10;
        nsuma /= 10;
    }
    cout << suma << endl;
}

