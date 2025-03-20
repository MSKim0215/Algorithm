#include <bits/stdc++.h>

using namespace std;

int coinTypes[4] = { 25, 10, 5, 1 };

int main()
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int input;
        cin >> input;
        
        for(int j = 0; j < 4; j++)
        {
            cout << input / coinTypes[j] << " ";
            
            input %= coinTypes[j];
        }
        cout << "\n";
    }
}