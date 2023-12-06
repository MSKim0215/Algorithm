#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) 
{
    int width, height;      // 가로, 세로
    
    int tempX = dots[0][0];     // 비교군 x 좌표
    int tempY = dots[0][1];     // 비교군 y 좌표
    
    // 1. 세로 구하기
    for(int i = 1; i < dots.size(); i++)
    {
        if(dots[i][0] == tempX)
        {   // 같은 x좌표라면 서로의 y 값을 빼준다.
            height = dots[i][1] - tempY;
            if(height < 0) height *= -1;
        }
    }
    
    // 2. 가로 구하기
    for(int i = 1; i < dots.size(); i++)
    {
        if(dots[i][1] == tempY)
        {   // 같은 y좌표라면 서로의 x 값을 빼준다.
            width = dots[i][0] - tempX;
            if(width < 0) width *= -1;
        }
    }
    
    // 3. 넓이 반환
    return width * height;
}