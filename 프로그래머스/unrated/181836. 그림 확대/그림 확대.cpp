#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k)
{
    vector<string> answer;
    
    for(int i = 0; i < picture.size(); i++)
    {
        string tempStr = "";
        
        for(int j = 0; j < picture[i].length(); j++)
        {
            for(int loop = 0; loop < k; loop++)
            {
                tempStr += picture[i][j];
            }
        }
        
        for(int loop = 0; loop < k; loop++)
        {
            answer.push_back(tempStr);
        }
    }
    
    return answer;
}