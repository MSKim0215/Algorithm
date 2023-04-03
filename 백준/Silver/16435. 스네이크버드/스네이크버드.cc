#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;        // 과일의 개수
    long long L;  // 스네이크버드의 초기 길이
    cin >> N >> L;
    
    vector<long long> fruitLengthVec;
    for(int i = 0; i < N; i++)
    {
        long long length;
        cin >> length;
        fruitLengthVec.push_back(length);
    }
    
    sort(fruitLengthVec.begin(), fruitLengthVec.end());
    
    for(int i = 0; i < N; i++)
    {
        if(fruitLengthVec[i] <= L)
        {
            L++;
        }
        else break;
    }
    
    cout << L;
}