#include <iostream>

using namespace std;

int main()
{
    unsigned int A, B, V;      // V: 나무 막대 길이
    cin >> A >> B >> V;        // A: 낮 이동거리, B: 밤 이동거리
    
    int targetMove = (V - B);   
    int dailyMove = (A - B);    // 하루 이동거리
    
    int result = targetMove / dailyMove;
    if(targetMove % dailyMove != 0)
    {
        result++;
    }
    
    cout << result;
}