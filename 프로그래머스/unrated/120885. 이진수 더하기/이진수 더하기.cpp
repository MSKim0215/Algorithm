#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int ChangeDecimal(string binary)
{
    int result = 0;
    int counting = binary.length();
    
    for(int i = 0; i < binary.length(); i++)
    {
        if(binary[i] == '1')
        {
            result += pow(2, counting - 1);
        }
        counting--;
    }
    
    return result;
}

string ChangeBinary(int decimal)
{
    string result = "";
    
    while(true)
    {
        if(decimal <= 0) break;
        
        int binary = decimal % 2;
        decimal /= 2;
        result += to_string(binary);
    }
    
    if(result != "")
    {
        reverse(result.begin(), result.end());  // 뒤집어줘야함
    }
    else
    {
        result = "0";
    }
    
    return result;
}

string solution(string bin1, string bin2)
{
    return ChangeBinary(ChangeDecimal(bin1) + ChangeDecimal(bin2));
}