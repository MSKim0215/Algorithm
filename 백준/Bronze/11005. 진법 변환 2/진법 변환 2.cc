#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, B;
    cin >> N >> B;
    
    map<int, char> alphabetsMap;
    for(int i = 10; i <= 35; i++)
    {
        alphabetsMap[i] = i + 55;
    }
    
    string answer;
    while(N > 0)
    {
        int target = N % B;
        if(alphabetsMap.find(target) != alphabetsMap.end())
        {
            answer += alphabetsMap[target];
        }
        else
        {
            answer += to_string(target);
        }
        
        N /= B;
    }
    
    reverse(answer.begin(), answer.end());
    cout << answer << "\n";
}