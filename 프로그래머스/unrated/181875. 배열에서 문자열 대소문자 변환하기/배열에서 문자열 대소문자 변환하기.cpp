#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {

    for(int i = 0; i < strArr.size(); i++)
    {    
        if(i % 2 == 0)
        {   // 짝수
            for(int j = 0; j < strArr[i].length(); j++)
            {
                if(strArr[i][j] >= 'A' && strArr[i][j] <= 'Z')
                {
                    strArr[i][j] += 32;
                }
            }
        }
        else
        {   // 홀수
            for(int j = 0; j < strArr[i].length(); j++)
            {
                if(strArr[i][j] >= 'a' && strArr[i][j] <= 'z')
                {
                    strArr[i][j] -= 32;
                }
            }
        }
    }
    
    return strArr;
}