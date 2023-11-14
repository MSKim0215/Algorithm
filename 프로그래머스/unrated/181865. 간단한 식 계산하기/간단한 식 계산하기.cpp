#include <string>
#include <vector>

using namespace std;

int solution(string binomial)
{
    string tempNum = "";
    string op = "";         // 부호
    
    int answer;
    
    for(int i = 0; i < binomial.length(); i++)
    {
        if(binomial[i] == '+' || binomial[i] == '-' || binomial[i] == '*')
        {
            op = binomial[i];
            
            answer = stoi(tempNum);
            tempNum = "";
        }
        else
        {
            tempNum += binomial[i];
        }
    }
    
    if(op == "+")
    {
        return answer + stoi(tempNum);
    }
    else if(op == "-")
    {
        return answer - stoi(tempNum);
    }
    else
    {
        return answer * stoi(tempNum);
    }
}