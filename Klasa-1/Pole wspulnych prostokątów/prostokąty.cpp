#include <bits/stdc++.h>
using namespace std;



int main()
{
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    int szerokosc;
    int wysokosc;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    if (x2 <= x3 || x1 >= x4 || y1 <= y4 || y2 >= y3)
    {
        cout << 0 << endl;
        return 0;
    }

    if (x1 <= x3 && x2 >= x4)
    {
        szerokosc = x4 - x3; // jeden prostok¹t w drugim
    }
    else if (x3 <= x1 && x4 >= x2)
    {
        szerokosc = x2 - x1; // jeden prostok¹t w drugim
    }
    else if (x1 < x3)
    {
        szerokosc = x2 - x3; //czêœæiowo sie nak³ada
    }
    else
    {
        szerokosc = x4 - x1;
    }

    if (y1 >= y3 && y2 <= y4) // jeden prostok¹t w drugim
    {
        wysokosc = y3 - y4;
    }
    else if (y3 >= y1 && y4 <= y2) // jeden prostok¹t w drugim
    {
        wysokosc = y1 - y2;
    }
    else if (y1 > y3)//czêœæiowo sie nak³adab
    {
        wysokosc = y3 - y2;
    }
    else
    {
        wysokosc = y1 - y4;
    }

    cout << (wysokosc * szerokosc) << endl;




}
