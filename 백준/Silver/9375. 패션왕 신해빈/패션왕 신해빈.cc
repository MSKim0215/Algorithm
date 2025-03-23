#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    
    for(int i = 0; i < testCase; i++)
    {
        int n;
        cin >> n;
        cin.ignore();
 
        map<string, int> clothesMap;
        for(int j = 0; j < n; j++)
        {
            string name, type;
            cin >> name >> type;
            
            clothesMap[type]++;
        }
        
        long long combinationCount = 1;
        for(auto cloth : clothesMap)
        {
            combinationCount *= ((long long)cloth.second + 1);
        }
        
        cout << combinationCount - 1 << "\n";
    }
}