#include <iostream>

using namespace std;

int main()
{
    int paper[100][100] = {0};    // 도화지
    int result = 0;               // 넓이 총합
    
    int count;                    // 색종이 개수
    cin >> count;
    
    for(int i = 0; i < count; i++)
    {
        int posX, posY;
        cin >> posX >> posY;
        
        for(int j = posX; j < posX + 10; j++)
        {
            for(int k = posY; k < posY + 10; k++)
            {
                if(paper[j][k] == 0) // 색종이가 붙지 않은 영역인 경우에만 넓이를 더함
                {
                    result++;
                }
                paper[j][k]++;    // 색종이가 붙은 좌표 표기
            }
        }
    }
    
    cout << result;
}