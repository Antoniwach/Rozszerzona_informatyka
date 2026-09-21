#include <bits/stdc++.h>
using namespace std;
int t;
int X;
int Y;
int main()
{
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> X;
        cin >> Y;

        if(X == 0 && Y == 0){
            cout << "O" << endl;
        } else if(X == 0 && Y != 0 ){
            cout << "OY" << endl;
        } else if(X != 0 && Y == 0){
            cout << "OX" << endl;
        } else if(X > 0 && Y > 0){
            cout << "I" << endl;
        } else if(X < 0 && Y > 0){
            cout << "II" << endl;
        } else if(X < 0 && Y < 0){
            cout << "III" << endl;
        } else if(X > 0 && Y < 0){
            cout << "IV" << endl;
        }
    }
}





