#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;     // 총 연산 횟수
    
    for(int i = 0; i < num_list.size(); i++)
    {
        while(true)
        {
            if(num_list[i] == 1) break;
            
            if(num_list[i] % 2 == 0)
            {   // 짝수라면 2를 나눈다.
                num_list[i] /= 2;
            }
            else
            {   // 홀수라면 1을 빼고 2를 나눈다.
                num_list[i] = (num_list[i] - 1) / 2;
            }
            
            answer++;
        }
    }
    
    return answer;
}