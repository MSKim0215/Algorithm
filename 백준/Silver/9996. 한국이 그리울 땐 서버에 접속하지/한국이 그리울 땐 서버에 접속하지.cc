#include <bits/stdc++.h>

using namespace std;

vector<string> Split(const string& target, string delimiter)
{
    vector<string> result;
    
    auto startIndex = 0;
    auto endIndex = target.find(delimiter);
    
    while(endIndex != string::npos)
    {
        result.push_back(target.substr(startIndex, endIndex - startIndex));
        startIndex = endIndex + delimiter.size();
        endIndex = target.find(delimiter, startIndex);
    }
    
    result.push_back(target.substr(startIndex));
    
    return result;
}

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