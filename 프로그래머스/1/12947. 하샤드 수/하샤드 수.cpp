#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
    bool answer = true;
    
    string changeNum = to_string(x);
    int totalNum = 0;
    for(int i = 0; i < changeNum.length(); i++)
    {
        string temp = "";
        temp += changeNum[i];
        totalNum += stoi(temp);
    }
    
    if(x % totalNum == 0) return true;
    return false;
}