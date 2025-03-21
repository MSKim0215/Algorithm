#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);
    
    for(int i = 0; i < S.length(); i++)
    {
        if(S[i] >= 'A' && S[i] <= 'Z')
        {
            if(S[i] + 13 > 'Z')
            {
                S[i] -= 'Z' + 1;
                S[i] += 'A';
            }
            
            S[i] += 13;
        }
        else if(S[i] >= 'a' && S[i] <= 'z')
        {
            if(S[i] + 13 > 'z')
            {
                S[i] -= 'z' + 1;
                S[i] += 'a';
            }
            
            S[i] += 13;
        }
    }
    
    cout << S;
}