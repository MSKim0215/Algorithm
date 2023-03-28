#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int result = 0;
    
    while(N--)
    {
        bool alphabets[26] = {false};    // 알파벳 등장 여부 저장배열
        string word;
        cin >> word;
        
        bool isGroup = true;
        for(int i = 0; i < word.size(); i++)
        {
            int index = word[i] - 'a';
            if(alphabets[index])
            {    // 이미 등장한 알파벳이면
                if(word[i - 1] != word[i])
                {    // 이전 문자와 다르면 그룹 단어가 아님
                    isGroup = false;
                    break;
                }
            }
            else
            {    // 처음 등장한 알파벳
                alphabets[index] = true;
            }
        }
        
        if(isGroup) result++;
    }
    
    cout << result;
}