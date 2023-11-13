#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) 
{ 
    vector<int> answer(52, 0);
    
    for(int i = 0; i < my_string.length(); i++)
    {
        if('A' <= my_string[i] && 'Z' >= my_string[i])
        {
            answer[my_string[i] - 'A']++;
        }
        else if('a' <= my_string[i] && 'z' >= my_string[i])
        {
            answer[my_string[i] - 'a' + 26]++;
        }
    }
    
    return answer;
}