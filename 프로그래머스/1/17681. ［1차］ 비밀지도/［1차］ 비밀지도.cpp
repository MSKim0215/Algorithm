#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> changeBinary(int n, vector<int> arr)
{
    vector<string> result;
    
    for(int i = 0; i < arr.size(); i++)
    {
        string tempStr = "";
        while(true)
        {
            if(arr[i] <= 0) break;
            
            tempStr += to_string(arr[i] % 2);
            arr[i] /= 2;
        }
        
        if(tempStr.length() < n)
        {   // 자리수가 부족하면 채우기
            int addCount = n - tempStr.length();
            for(int j = 0; j < addCount; j++)
            {
                tempStr += to_string(arr[i]);
            }
        }
        
        reverse(tempStr.begin(), tempStr.end());    // 문자열 뒤집기
        
        result.push_back(tempStr);
    }
    
    return result;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) 
{
    // n: 지도의 길이 (지도는 정사각형)
    // " ": 공백, "#": 벽
    
    // 1. arr1 의 값을 2진수로 변환
    vector<string> change_arr1 = changeBinary(n, arr1);
    
    // 2. arr2 의 값을 2진수로 변환
    vector<string> change_arr2 = changeBinary(n, arr2);
    
    // 3. arr1 과 arr2를 더함
    vector<string> answer;
    
    for(int i = 0; i < change_arr1.size(); i++)
    {
        string tempStr = "";
        
        for(int j = 0; j < change_arr1[i].length(); j++)
        {
            if(change_arr1[i][j] == '0' && change_arr2[i][j] == '0')
            {
                tempStr += " ";
            }
            else
            {
                tempStr += "#";
            }
        }
        
        answer.push_back(tempStr);
    }
    
    return answer;
}