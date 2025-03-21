#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    int sumTemperatures[100001];
    for(int i = 1; i <= N; i++)
    {
        int input;
        cin >> input;
        
        sumTemperatures[i] = sumTemperatures[i - 1] + input;
    }
    
    int maxValue = -10000004;
    for(int i = 0; i < N; i++)
    {
        if(K + i > N) break;
        
        int result = sumTemperatures[K + i] - sumTemperatures[i];
        maxValue = max(maxValue, result);
    }
    
    cout << maxValue << "\n";
}