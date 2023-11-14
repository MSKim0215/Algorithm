#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l)
{
    // k: 비교값
    // s: 시작 인덱스
    // l: 부분 문자열의 길이
    
    vector<int> answer;     // 잘라낸 숫자가 k보다 클 경우 넣어준다.
    
    for(int i = 0; i < intStrs.size(); i++)
    {
        string tempNum = "";
        
        for(int j = s; j < s + l; j++)
        {
            tempNum += intStrs[i][j];
        }
        
        int changeNum = stoi(tempNum);
        if(k < changeNum)
        {
            answer.push_back(changeNum);
        }
    }
    
    return answer;
}