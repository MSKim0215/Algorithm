#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> spell, vector<string> dic) 
{
    int spell_count = spell.size();     // 알파벳 개수
    
    // 가지고 있는 단어 중에서 알파벳 개수와 같은 글자가 없다면 충족되지 않는 경우이다.
    vector<string> checkWord;
    for(int i = 0; i < dic.size(); i++)
    {
        if(dic[i].length() == spell_count)
        {   
            checkWord.push_back(dic[i]);
        }
    }
    
    if(checkWord.size() == 0) return 2;
    else
    {
        for(int i = 0; i < checkWord.size(); i++)
        {
            map<string, int> checkMap;
        
            for(int i = 0; i < spell.size(); i++)
            {
                checkMap.insert({spell[i], 0});
            }
            
            for(int j = 0; j < checkWord[i].length(); j++)
            {
                string targetWord = "";
                targetWord += checkWord[i][j];
                
                if(checkMap.find(targetWord) != checkMap.end())
                {
                    checkMap[targetWord]++;
                }
            }
            
            bool isSuccess = true;
            for(auto iter = checkMap.begin(); iter != checkMap.end(); iter++)
            {
                if(iter->second != 1)
                {
                    isSuccess = false;
                }
            }
            
            if(isSuccess) return 1;
        }
        
        return 2;
    }
}