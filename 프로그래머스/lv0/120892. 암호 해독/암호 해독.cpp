#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
    int count = 1;
    for(int i = 0; i < cipher.length(); i++)
    {
        if(count % code == 0)
        {
            answer += cipher[i];
        }
        count++;
    }
    return answer;
}