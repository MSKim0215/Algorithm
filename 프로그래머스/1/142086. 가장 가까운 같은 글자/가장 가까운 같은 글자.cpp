#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    map<char, int> alphabets;    // key: 알파벳, value: 위치 인덱스
    
    for(int i = 0; i < s.length(); i++)
    {
        if(alphabets.find(s[i]) != alphabets.end())
        {
            int index = i - alphabets[s[i]];
            answer.push_back(index);
            
            alphabets[s[i]] = i;
        }
        else
        {
            answer.push_back(-1);
            alphabets.insert({s[i], i});
        }
    }   
    
    return answer;
}