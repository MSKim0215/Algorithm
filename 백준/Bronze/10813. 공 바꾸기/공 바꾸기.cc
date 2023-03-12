#include<iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    int baskets[100];
    for(int i = 0; i < 100; i++)
    {
        baskets[i] = i + 1;
    }
    
    for(int count = 0; count < M; count++)
    {
        int i, j;
        cin >> i >> j;
        
        int temp = baskets[i - 1];
        baskets[i - 1] = baskets[j - 1];
        baskets[j - 1] = temp;
    }
    
    for(int i = 0; i < N; i++)
    {
        cout << baskets[i] << " ";
    }
}