#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill)
{   // wallet[0]: 지갑 가로 길이, wallet[1]: 지갑 세로 길이
    // bill[0]: 지폐 가로 길이, bill[1]: 지폐 세로 길이
    int answer = 0;
    
    int walletWidth = wallet[0];
    int walletHeight = wallet[1];
    
    int billWidth = bill[0];
    int billHeight = bill[1];
    
    while(true)
    {
        if((billWidth <= walletWidth && billHeight <= walletHeight) ||
          (billHeight <= walletWidth && billWidth <= walletHeight))
        {   // 접힌 지폐가 0도, 90도 회전해서 지갑에 넣을 수 있다면 그만 접어라.
            return answer;
        }
        else
        {   // 접을 경우, 가장 긴 길이를 반으로 접는다.
            if(billWidth >= billHeight)
            {
                billWidth /= 2;
            }
            else
            {
                billHeight /= 2;
            }
            answer++;
        }
    }
    
    return answer;
}