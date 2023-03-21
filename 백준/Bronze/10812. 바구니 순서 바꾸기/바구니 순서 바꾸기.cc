#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    vector<int> baskets(N);
    iota(baskets.begin(), baskets.end(), 1);
    
    for(int i = 0; i < M; i++)
    {
        int begin, end, mid;
        cin >> begin >> end >> mid;
        
       rotate(baskets.begin() + (begin - 1), baskets.begin() + (mid - 1), baskets.begin() + end);
    }
    
    for(int value : baskets)
    {
        cout << value << " ";
    }
}