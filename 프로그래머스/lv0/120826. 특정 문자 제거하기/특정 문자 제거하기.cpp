#include <string>
#include <vector>

using namespace std;

// my_string: 주어진 문자열, letter: 필터링 문자열
string solution(string my_string, string letter) {
    string answer;
    
    for(int i = 0 ; i < my_string.length(); i++)
    {
        for(int j = 0; j < letter.length(); j++)
        {
            if(my_string[i] != letter[j])
            {
                answer += my_string[i];
            }
        }
    }
    
    return answer;
}