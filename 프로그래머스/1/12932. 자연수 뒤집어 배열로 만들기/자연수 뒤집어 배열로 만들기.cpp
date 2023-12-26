#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n)
{
    vector<int> answer;
    
    string changeStr = to_string(n);
    for(int i = 0; i < changeStr.length() / 2; i++)
    {
        char temp = changeStr[i];
        changeStr[i] = changeStr[changeStr.length() - i - 1];
        changeStr[changeStr.length() - i - 1] = temp;
    }
    
    for(int i = 0; i < changeStr.length(); i++)
    {
        string temp = "";
        temp += changeStr[i];
        answer.push_back(stoi(temp));
    }
    
    return answer;
}