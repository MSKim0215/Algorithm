#include <string>

using namespace std;

int solution(string A, string B) 
{
    int moveCount = 0;
    
    while(true)
    {  
        // TODO: 현재 상태가 같은 문자열인지 확인한다.
        if(A == B) return moveCount;

        string temp = "";
        temp += A[A.length() - 1];

        // TODO: 같은 문자열이 아니라면 A 문자열의 순서를 옮긴다.
        for(int i = 0; i < A.length() - 1; i++)
        {
            temp += A[i];
        }

        // TODO: 이동 횟수를 상승시킨다.
        moveCount++;

        // TODO: 문자열의 길이만큼 반복을 했는데, 같은 값이 나오지 않는다면 -1로 리턴한다.
        if(moveCount == A.length()) return -1; 
        
        A = temp;
    }
}