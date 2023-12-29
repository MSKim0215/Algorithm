#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strings, int n)
{
    // 1. 정렬 기준 단어 처리
    map<string, int> wordMap;
    for(int i = 0; i < strings.size(); i++)
    {
        wordMap.insert({strings[i][n] + strings[i], i});
    }
    
    // 2. 정렬된 단어 처리
    vector<string> answer;
    for(auto iter = wordMap.begin(); iter != wordMap.end(); iter++)
    {
        answer.push_back(strings[iter->second]);
    }
    
    return answer;
}