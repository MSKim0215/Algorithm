#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    string pattern;
    cin >> pattern;
    
    int dviIndex = pattern.find('*');
    string pre = pattern.substr(0, dviIndex);
    string suf = pattern.substr(dviIndex + 1);
    
    for(int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        
        if(pre.size() + suf.size() > input.size())
        {
            cout << "NE\n";
            continue;
        }
        
        if(pre == input.substr(0, pre.size()) && suf == input.substr(input.size() - suf.size()))
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NE\n";
            continue;
        }
    }
}