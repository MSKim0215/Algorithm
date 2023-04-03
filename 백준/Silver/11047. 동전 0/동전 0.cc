#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;        // 동전 종류수
    int K;        // 원하는 금액
    cin >> N >> K;
    
    vector<int> coins;
    for(int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        coins.push_back(input);
    }
    
    sort(coins.begin(), coins.end());
    
    int count = 0;        // 필요한 동전 개수
    for(int i = coins.size() - 1; i >= 0; i--)
    {
        if(K / coins[i] > 0)
        {
            count += K / coins[i];
            K %= coins[i];
        }
    }
    
    cout << count;
}