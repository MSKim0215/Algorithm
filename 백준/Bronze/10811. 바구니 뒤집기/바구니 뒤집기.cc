#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    int baskets[100];
    int basketCount = sizeof(baskets) / sizeof(*baskets);
    for(int i = 0; i < basketCount; i++)
    {
        baskets[i] = i + 1;
    }
    
    for(int count = 0; count < M; count++)
    {
        int i, j;
        cin >> i >> j;
        reverse(baskets + i - 1, baskets + j);
    }
    
    for(int i = 0; i < N; i++)
    {
        cout << baskets[i] << " ";
    }
}