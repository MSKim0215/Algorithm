#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    map<char, int> alphabetMap;
    for(int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        
        if(alphabetMap.find(input[0]) != alphabetMap.end())
        {
           alphabetMap[input[0]]++;
        }
        else
        {
            alphabetMap.insert(pair<char, int>(input[0], 1));
        }
    }
    
    bool isCount = false;
    for(auto iter = alphabetMap.begin(); iter != alphabetMap.end(); iter++)
    {
        if(iter->second < 5) continue;
        
        isCount = true;
        cout << iter->first;
    }
    
    if(!isCount) cout << "PREDAJA";
}