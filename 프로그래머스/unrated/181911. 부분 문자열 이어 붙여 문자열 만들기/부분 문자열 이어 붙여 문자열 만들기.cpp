#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
    for(int i = 0; i < my_strings.size(); i++)
    {
        for(int j = parts[i][0]; j <= parts[i][1]; j++)
        {
            answer += my_strings[i][j];
        }
    }
    
    return answer;
}