#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) 
{
    vector<string> changeArray;
    
    // TODO: array의 값들을 모두 string으로 변환한다.
    for(int i = 0; i < array.size(); i++)
    {
        changeArray.push_back(to_string(array[i]));    
    }
    
    // TODO: array의 값들에서 7이 존재하면 개수를 체크한다.
    int count = 0;
    for(int i = 0; i < changeArray.size(); i++)
    {
        for(int j = 0; j < changeArray[i].length(); j++)
        {
            if(changeArray[i][j] == '7')
            {
                count++;
            }
        }
    }
    
    return count;
}