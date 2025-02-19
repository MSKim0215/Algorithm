#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    map<string, int> participantMap;
    
    for(int i = 0; i < participant.size(); i++)
    {
        if(participantMap.find(participant[i]) != participantMap.end())
        {
            participantMap[participant[i]]++;
        }
        else
        {
            participantMap.insert(pair<string, int>(participant[i], 1));
        }
    }
    
    for(int i = completion.size() - 1; i >= 0; i--)
    {
        if(participantMap.find(completion[i]) != participantMap.end())
        {
            participantMap[completion[i]]--;
        }
    }

    string answer = "";
    for(auto iter = participantMap.begin(); iter != participantMap.end(); iter++)
    {
        if(iter->second > 0)
        {
            answer = iter->first;
            break;
        }
    }
    
    return answer;
}