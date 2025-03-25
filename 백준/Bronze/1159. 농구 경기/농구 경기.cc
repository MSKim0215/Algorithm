#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    map<char, int> alphabetsMap;
    for(int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        
        alphabetsMap[name[0]]++;
    }
    
    string answer;
    for(auto alphabet : alphabetsMap)
    {
        if(alphabet.second < 5) continue;
        
        answer += alphabet.first;
    }
    
    if(answer == "") answer = "PREDAJA";
    
    cout << answer << "\n";
}