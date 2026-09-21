#include <bits/stdc++.h>
using namespace std;
int n;
int m;
int przeciecia;
int kto;
int main()
{
    cin >> n >> m;
    przeciecia = n * m;
    while(przeciecia > 0)
    {
        kto += 1;
        przeciecia -= (n + m) - 1;
        n -=1;
        m -=1;
    }
    if(kto % 2 == 0)
    {
        cout << "Maciek";
    }
    else cout << "Adrian";
}
