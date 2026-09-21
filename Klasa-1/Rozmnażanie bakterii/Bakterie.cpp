#include <bits/stdc++.h>
using namespace std;
int x1, y1, x2, y2,x3, y3, x4, y4;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int lewy = max(x1, x3);
    int prawy = min(x2, x4);

    int gora = min(y1, y3);
    int dol = max(y2, y4);

    int szerokosc = prawy - lewy;
    int wysokosc = gora - dol;

    if (szerokosc <= 0 || wysokosc <= 0)
    {
        cout << 0;
    }
    else
    {
        cout << szerokosc * wysokosc;
    }

    return 0;
}

}


