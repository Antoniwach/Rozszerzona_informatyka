#include <bits/stdc++.h>

using namespace std;
int wcz;
int p1;
int akt;
int main()
{
    cin >> wcz;
    akt = wcz;
    p1 = 0;
    while(akt % 2 == 0)
    {
        p1 = p1 + 1;
        akt = akt / 2;






    }
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "2^" << p1 << "=" << pow(2, p1) << endl;






}
