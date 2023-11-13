#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) 
{
    vector<char> answer;
    
    for(int i = 0; i < my_string.length(); i++)
    {
        if(my_string[i] >= 'A' && my_string[i] <= 'Z')
        {
            answer.push_back(my_string[i] + 32);
        }
        else
        {
            answer.push_back(my_string[i]);
        }
    }
    
    sort(answer.begin(), answer.end());     // 정렬
    
    string result = "";
    
    for(int i = 0; i < answer.size(); i++)
    {
        result += answer[i];
    }
    
    return result;
}