#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer = arr;
    int arrSize = arr.size();       // 벡터 크기
    int count = 0;                  // 목표 거듭제곱
    int targetSize = pow(2, count); // 목표 크기
    
    while(true)
    {
        if(arrSize <= targetSize) break;
        
        count++;
        targetSize = pow(2, count);
    }
    
    if(arrSize == targetSize)
    {
        return answer;
    }
    else
    {
        int addCount = targetSize - arrSize;

        for(int i = 0; i < addCount; i++)
        {
            answer.push_back(0);
        }
    }
    
    return answer;
}