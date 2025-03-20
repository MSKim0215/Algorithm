#include <bits/stdc++.h>

using namespace std;

int main()
{
    string answer;
    cin >> answer;
    
    map<char, int> alphabetMap;
    for(int i = 0; i < 26; i++)
    {
        alphabetMap.insert(pair<char, int>((char)(i + 97), 0));
    }
    
    for(int i = 0; i < answer.length(); i++)
    {
        alphabetMap[answer[i]]++;
    }
    
    for(auto it = alphabetMap.begin(); it != alphabetMap.end(); it++)
    {
        cout << it->second << " ";
    }
}