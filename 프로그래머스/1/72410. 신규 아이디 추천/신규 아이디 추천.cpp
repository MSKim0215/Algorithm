#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string ToUpper(string targetStr)
{
    string result = targetStr;
    
    for(int i = 0; i < result.length(); i++)
    {
        if(result[i] >= 'A' && result[i] <= 'Z')
        {   // 소문자 -> 대문자 변경
            result[i] += 32;
        }
    }
    
    return result;
}

string RemoveNonTargetChar(string targetStr)
{
    string result = targetStr;
    
    for(int i = result.length() - 1; i >= 0; i--)
    {
        if(result[i] != '-' && result[i] != '_' && result[i] != '.' &&
          !(result[i] >= 'a' && result[i] <= 'z') &&
          !(result[i] >= '0' && result[i] <= '9'))
        {
            result.erase(result.begin() + i);
        }
    }
    
    return result;
}

string ChangeSequenceDotString(string targetStr)
{
    string result = targetStr;
    char prevChar = '\0';
    int startIndex = 0;
    int endIndex = 0;
    int sequenceCount = 0;
    bool isChange = false;
    
    for(int i = result.length() - 1; i >= 0; i--)
    {
        if(result[i] == '.')
        {   // 현재 문자가 마침표라면,
            if(prevChar != '.')
            {   // 이전 문자가 마침표가 아니라면
                prevChar = result[i];
                endIndex = i;
                isChange = true;
            }
            
            if(isChange)
            {
                sequenceCount++;
            }
        }
        else
        {   // 현재 문자가 마침표가 아니라면,
            if(prevChar == '.')
            {   // 이전 문자가 마침표라면
                if(sequenceCount > 1)
                {   // 2번 이상 마침표였다면
                    startIndex = i + 1;          
                    result.erase(startIndex, endIndex - startIndex);  
                }
                
                sequenceCount = 0;
                isChange = false;
            }
            
            prevChar = result[i];
        }
    }
    
    if(isChange && sequenceCount > 1)
    {   // 변경이 마무리가 안된 경우
        startIndex = 0;
        result.erase(startIndex, endIndex - startIndex);
    }
    
    return result;
}

string RemoveFirstDotString(string targetStr)
{
    string result = targetStr;
    
    if(result[0] == '.')
    {
        result.erase(result.begin());
    }
    
    return result;
}

string RemoveLastDotString(string targetStr)
{
    string result = targetStr;
    
    if(result[result.length() - 1] == '.')
    {
        result.erase(result.begin() + result.length() - 1);
    }
    
    return result;
}

string RemoveFirstLastDotString(string targetStr)
{
    string result = targetStr;
    result = RemoveLastDotString(result);
    result = RemoveFirstDotString(result);
    return result;
}

string ChangeEmptyString(string targetStr)
{
    return targetStr.length() == 0 ? "a" : targetStr;
}

string LimitStringLength(string targetStr)
{
    string result = targetStr;
    
    if(result.length() > 15)
    {
        result.erase(15, result.length() - 1);
    }
    
    result = RemoveLastDotString(result);
    
    return result;
}

string LoopAddString(string targetStr)
{
    string result = targetStr;
    
    while(result.length() < 3)
    {
        result += result[result.length() - 1];
    }
    
    return result;
}

string CreateUserID(string targetStr)
{
    string result = targetStr;
    
    // 1. 모든 대문자를 대응되는 소문자로 치환한다.
    result = ToUpper(result);
    
    // 2. 정해진 문자를 제외한 문자들을 제거한다.
    result = RemoveNonTargetChar(result);  
    
    // 3. 마침표가 2번 이상 연속된 부분을 하나의 마침표로 바꾼다.
    result = ChangeSequenceDotString(result);
    
    // 4. 마침표가 처음이나, 끝에 위치하면 제거한다.
    result = RemoveFirstLastDotString(result);
    
    // 5. 빈 문자열이라면, a를 대입한다.
    result = ChangeEmptyString(result);
    
    // 6. 문자 길이가 16 이상이면, 첫 15개 문자를 제외한 나머지 모두 제거한다.
    // 만약, 제거 후 마침표가 끝에 위치한다면 끝에 위치한 마침표를 제거한다.
    result = LimitStringLength(result);
    
    // 7. 길이가 2자 이하라면, 마지막 문자를 길이가 3이 될 때까지 반복해서 붙인다.
    result = LoopAddString(result);
    
    return result;
}

string solution(string new_id)
{
    return CreateUserID(new_id);
}