#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list)
{
    vector<string> answer;
    
    int targetIndex;            // 시작 or 마지막 인덱스
    string targetWord;          // 기준값
    
    for(int i = 0; i < str_list.size(); i++)
    {
        if(str_list[i] == "r" || str_list[i] == "l")
        {   // 오른쪽 or 왼쪽
            targetIndex = i;        
            targetWord = str_list[i];
            break;
        }
    }
    
    if(targetWord == "r")
    {
        for(int i = targetIndex + 1; i < str_list.size(); i++)
        {
            answer.push_back(str_list[i]);
        }
    }
    else if(targetWord == "l")
    {
        for(int i = 0; i < targetIndex; i++)
        {
            answer.push_back(str_list[i]);
        }
    }
    
    return answer;
}