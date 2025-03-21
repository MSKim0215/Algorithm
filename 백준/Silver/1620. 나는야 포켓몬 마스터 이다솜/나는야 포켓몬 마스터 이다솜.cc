#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    map<string, int> nameMap;
    map<int, string> codeMap;
    for(int i = 1; i <= N; i++)
    {
        string input;
        cin >> input;
        
        nameMap.insert(pair<string, int>(input, i));
        codeMap.insert(pair<int, string>(i, input));
    }
    
    for(int i = 0; i < M; i++)
    {
        string input;
        cin >> input;
        
        if(nameMap.find(input) != nameMap.end())
        {
            cout << nameMap[input] << "\n";
        }
        else if(codeMap.find(stoi(input)) != codeMap.end())
        {
            cout << codeMap[stoi(input)] << "\n";   
        }
    }
}
