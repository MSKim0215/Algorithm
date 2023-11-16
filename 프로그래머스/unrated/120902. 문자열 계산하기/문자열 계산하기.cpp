#include <string>
#include <vector>

using namespace std;

int solution(string my_string)
{
    int answer = 0;
    
    vector<int> numbers;    // 가져온 숫자들
    vector<char> ops;     // 산술 연산자들
    
    string tempNum = "";    // 임시 숫자 보관
    
    for(int i = 0; i < my_string.length(); i++)
    {
        if(my_string[i] == '+' || my_string[i] == '-')
        {   // 산술 연산자라면
            ops.push_back(my_string[i]);
        }
        else if(my_string[i] >= '0' && my_string[i] <= '9')
        {   // 숫자라면
            tempNum += my_string[i];
        }
        else
        {   // 공백이라면 숫자 정리
            if(tempNum != "")
            {
                numbers.push_back(stoi(tempNum));
                tempNum = "";
            }
        }
    }
    
    if(tempNum != "")
    {
        numbers.push_back(stoi(tempNum));
    }
    
    int opIndex = 0;        // 연산자 인덱스
    int numberIndex = 0;    // 숫자 인덱스
    
    answer = numbers[numberIndex];
    numberIndex++;
    
    while(true)
    {
        if(opIndex == ops.size()) break;
        
        if(ops[opIndex] == '+')
        {
            answer += numbers[numberIndex];
        }
        else
        {
            answer -= numbers[numberIndex];
        }

        numberIndex++;
        opIndex++;
    }
    
    return answer;
}