#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) 
{
    // 1. 3진법 변환 (뒤집힌 상태)
    string tempStr = "";
    while(true)
    {
        if(n <= 0) break;
        
        tempStr += to_string(n % 3);
        n /= 3;
    }
    
    // 2. 3진법 뒤집기
    reverse(tempStr.begin(), tempStr.end());
    
    // 3. 10진수 변환
    int answer = 0;
    for(int i = 0; i < tempStr.length(); i++)
    {
        string temp = "";
        temp += tempStr[i];
        
        int targetNum = pow(3, i) * stoi(temp);
        answer += targetNum;
    }
    
    return answer;
}