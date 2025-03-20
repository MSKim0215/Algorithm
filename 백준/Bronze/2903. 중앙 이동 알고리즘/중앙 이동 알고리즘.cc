#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; 
    cin >> N;
    
    int startCount = 2;     // 생성되는 선의 개수
    int addCount = 1;
    
    for(int i = 0; i < N; i++)
    {
        startCount += addCount;
        addCount *= 2;
    }
    
    cout << startCount * startCount << endl;
}