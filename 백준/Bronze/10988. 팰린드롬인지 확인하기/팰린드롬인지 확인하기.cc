#include <bits/stdc++.h>

using namespace std;

int main()
{
    string answer;
    cin >> answer;
    
    string reverseStr = answer;
    reverse(reverseStr.begin(), reverseStr.end());
    
    cout << (answer == reverseStr) << "\n";
}