#include<iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    int baskets[100] = {0};
    
    for(int count = 0; count < M; count++)
    {
        int i, j, k;
        cin >> i >> j >> k;
        
        for(int index = i; index <= j; index++)
        {
            baskets[index - 1] = k;
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        cout << baskets[i] << " ";
    }
}