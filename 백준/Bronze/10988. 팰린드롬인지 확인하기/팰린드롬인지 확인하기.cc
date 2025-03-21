#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin >> word;
    
    string reverseWord = word;
    reverse(reverseWord.begin(), reverseWord.end());
    
    if(reverseWord == word)
    {
        cout << 1 << "\n";
        return 0;
    }
    
    cout << 0 << "\n";
}