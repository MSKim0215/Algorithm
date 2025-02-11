#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) 
{   // bandage: 시전 시간, 초당 회복량, 추가 회복량 (시전 시간까지 유지될 경우)
    // attacks: 공격 시간, 피해량
    int currHealth = health;    // 현재 체력
    int turn = 0;       // 게임 턴
    int index = 0;      // 몬스터 패턴 인덱스
    int bonusCount = 0; // 연속 치유 횟수
    
    while(index < attacks.size())
    {
        if(turn == attacks[index][0])
        {   // 공격 타이밍이라면,
            currHealth -= attacks[index][1];
            index++;
            bonusCount = 0;
            
            if(currHealth <= 0)
            {   // 체력이 0이하면 종료
                return -1;
            }
        }
        else
        {   // 공격 당하지 않았으면,
            currHealth += bandage[1];
            
            bonusCount++;
            if(bonusCount == bandage[0])
            {   // 연속 치유를 끝까지 유지했으면 추가 회복 진행
                bonusCount = 0;
                currHealth += bandage[2];
            }
            
            if(currHealth > health)
            {   // 최대 체력이 넘는다면,
                currHealth = health;
            }
        }
        
        turn++;  // 턴 종료
    }
    
    return currHealth;
}