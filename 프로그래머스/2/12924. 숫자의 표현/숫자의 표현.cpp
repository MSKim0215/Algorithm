#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    if(n == 1) return 1;
    
    int answer = 1;     // n 자신은 무조건 포함이므로 1 시작
    
    vector<vector<int>> caseVec;
    vector<int> tempVec;
    int startNumber = 1;
    int totalSum = 0;
    for(int i = 1; i < n; i++)
    {
        totalSum += i;
        tempVec.push_back(i);
        
        if(totalSum >= n)
        {
            if(totalSum == n)
            {
                caseVec.push_back(tempVec);
            }
            
            totalSum = 0;
            i = ++startNumber;
            
            tempVec.clear();
        }
    }
    
    return answer + caseVec.size();
}