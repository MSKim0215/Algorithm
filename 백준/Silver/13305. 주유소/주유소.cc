#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int N;        // 도시의 개수
    cin >> N;
    
    int totalLength = 0;        // 총 거리수
    vector<int> loadVec;
    for(int i = 0; i < N - 1; i++)
    {    // TODO: 도시간의 거리
        int length;
        cin >> length;
        loadVec.push_back(length);
        totalLength += length;
    }
    
    map<int, int> priceMaps;
    for(int i = 0; i < N; i++)
    {    // TODO: 도시 기름 가격
        int price;
        cin >> price;
        priceMaps.insert({i, price});
    }
    
    int result = 0;
    for(int i = 0; i < N; i++)
    {
        result += (totalLength / priceMaps[i]);
        totalLength %= priceMaps[i];
    }
    
    cout << result;
}