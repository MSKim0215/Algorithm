#include <iostream>
#include <string>

using namespace std;

int main()
{
    string answer;
    getline(cin, answer);
    
    bool isWord = false;
    int count = 0;
    
    for(int i = 0; i < answer.length(); i++)
    {
        if(answer[i] == ' ')
        {
            if(isWord)
            {
                count++;
                isWord = false;
            }
        }
        else
        {
            isWord = true;
        }
    }
    
    // 문자열의 끝이 공백이 아닌 경우에도 마지막 단어가 존재하므로 개수를 1 증가
    if(isWord) count++;
    
    cout << count;
}