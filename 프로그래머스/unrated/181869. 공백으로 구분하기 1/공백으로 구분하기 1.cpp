#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;

    // 공백 체크
    string word = "";
    for(int i = 0; i < my_string.length(); i++)
    {
        if(my_string[i] != ' ')
        {
            word += my_string[i];
        }
        else
        {
            if(word != "")
            {
                answer.push_back(word);
                word = "";
            }
        }
    }
    
    // 공백이 없는 경우
    answer.push_back(word);
    
    return answer;
}