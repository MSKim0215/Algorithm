#include <bits/stdc++.h>

using namespace std;

int main()
{
    string answer;
    cin >> answer;
    
    map<char, int> alphabetsMap;
    for(int i = 0; i < 26; i++)
    {
        alphabetsMap[i + 97] = 0;
    }
    
    for(int i = 0; i < answer.length(); i++)
    {
        alphabetsMap[answer[i]]++;
    }
    
    for(auto iter = alphabetsMap.begin(); iter != alphabetsMap.end(); iter++)
    {
        cout << iter->second << " ";
    }
}