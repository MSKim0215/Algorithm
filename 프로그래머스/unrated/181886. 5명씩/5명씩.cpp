#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    
    answer.push_back(names[0]);
    
    for(int i = 1; i < names.size(); i++)
    {
        if(i % 5 == 0)
        {
            answer.push_back(names[i]);
        }
    }
    
    return answer;
}