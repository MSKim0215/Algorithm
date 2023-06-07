#include <string>
#include <vector>

using namespace std;

// my_string: 주어진 문자열, letter: 필터링 문자열
string solution(string my_string, string letter) {
    string answer;
    char filter = letter[0];        // letter은 항상 길이가 1인 알파벳
    
    for(int i = 0 ; i < my_string.length(); i++)
    {
        if(my_string[i] != filter)
        {
            answer += my_string[i];
        }
    }
    
    return answer;
}
