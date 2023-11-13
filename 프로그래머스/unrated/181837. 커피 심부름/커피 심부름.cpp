#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) 
{
    // 아메리카노: 4500원
    // 카페라떼: 5000원
    // 아무거나: 아아로 통일
    int ameCount = 0;       // 아메리카노 개수
    int latteCount = 0;     // 카페라떼 개수
    
    for(int i = 0; i < order.size(); i++)
    {
        if(order[i].find("cafelatte") != std::string::npos)
        {   // 카페라떼일 경우
            latteCount++;
        }
        else
        {   // 그 외 아메리카노
            ameCount++;
        }
    }
    
    return (ameCount * 4500) + (latteCount * 5000);
}