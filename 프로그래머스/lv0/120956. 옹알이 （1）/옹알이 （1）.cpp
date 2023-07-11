#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(int i = 0; i < babbling.size(); i++)
    {
        string result = "";
        
        result = regex_replace(babbling[i], regex("aya"), "1");
        result = regex_replace(result, regex("ye"), "1");
        result = regex_replace(result, regex("woo"), "1");
        result = regex_replace(result, regex("ma"), "1");
        
        bool isCheck = true;
        for(int j = 0; j < result.length(); j++)
        {
            if(result[j] != '1')
            {
                isCheck = false;
                break;
            }
        }
        
        if(isCheck)
        {
            answer++;
        }
    }
    
    return answer;
}