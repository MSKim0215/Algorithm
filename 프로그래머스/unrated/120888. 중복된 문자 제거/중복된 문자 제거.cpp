#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string my_string)
{
    string answer = "";
    map<char, int> wordMap;     // 단어 체크
    
    for(int i = 0; i < my_string.length(); i++)
    {
        map<char, int>::iterator iter;
        iter = wordMap.find(my_string[i]);
        if(iter == wordMap.end())
        {
            wordMap.insert({my_string[i], 1});
            answer += my_string[i];
        }
    }
    
    return answer;
}