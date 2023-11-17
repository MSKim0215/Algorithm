#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) 
{
    // 등차수열: n만큼 증가하는 수
    // 등비수열: n만큼 곱으로 증가하는 수
    
    vector<int> valueVec;
    
    for(int i = 0; i < common.size(); i++)
    {
        if(i != common.size() - 1)
        {
            valueVec.push_back(common[i + 1] - common[i]);
        }
    }
    
    if(valueVec[0] == valueVec[1])
    {   // 같으면 등차수열
        return common[common.size() - 1] + valueVec[0];
    }
    else
    {   // 같지 않으면 등비수열
        int temp = valueVec[1] / valueVec[0];
        return common[common.size() - 1] * temp;
    }
}