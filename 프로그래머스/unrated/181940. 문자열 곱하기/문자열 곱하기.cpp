#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < my_string.length(); j++)
        {
            answer += my_string[j];
        }
    }
    
    return answer;
}