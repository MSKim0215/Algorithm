#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool SortByValue(const pair<int, int> &_targetA, const pair<int, int> &_targetB)
{
    return _targetA.second < _targetB.second;
}

int main()
{
    int N;        // 사람의 수
    cin >> N;
    
    map<int, int> timeMaps;
    for(int i = 0; i < N; i++)
    {
        int time;
        cin >> time;
        timeMaps.insert({i, time});
    }
    
    vector<pair<int, int>> timeVec(timeMaps.begin(), timeMaps.end());
    sort(timeVec.begin(), timeVec.end(), SortByValue);
    
    int totalSum = 0;
    int result = 0;
    for(int i = 0; i < N; i++)
    {
        result = (result + timeVec[i].second);
        totalSum += result;
    }
    
    cout << totalSum;
}