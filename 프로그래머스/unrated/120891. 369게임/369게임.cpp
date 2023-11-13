#include <string>
#include <vector>

using namespace std;

int solution(int order) 
{
    int count = 0;      // 박수 횟수
    
    string temp = to_string(order);     // int 값을 string 형식으로 변환
    for(int i = 0; i < temp.length(); i++)
    {
        if(temp[i] == '3' || temp[i] == '6' || temp[i] == '9')
        {
            count++;
        }
    }
    
    return count;
}