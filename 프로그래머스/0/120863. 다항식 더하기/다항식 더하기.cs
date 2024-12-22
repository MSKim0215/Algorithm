using System;

public class Solution
{
    private string[] DevidePolynomial(string polynomial)
    {
        return polynomial.Replace(" ", string.Empty).Split("+");
    }
    
    private string GetValueX(string targetStr)
    {
        string result = string.Empty;
        
        for(int i = 0; i < targetStr.Length; i++)
        {
            if(targetStr[i] != 'x')
            {
                result += targetStr[i].ToString();
            }
            else
            {
                if(result == string.Empty)
                {
                    result = "1";
                }
            }
        }
        
        return result;
    }
    
    private string GetPolynomial(int xNum, int baseNum)
    {
        string answer = string.Empty;
        
        if(xNum != 0)
        {
            answer = (xNum == 1) ? "x" : (xNum + "x");
        }
        
        if(baseNum > 0)
        {
            answer += (xNum != 0) ? (" + " + baseNum) : baseNum.ToString();
        }
        
        return answer;
    }
    
    public string solution(string polynomial)
    {
        string[] devidePolynomial = DevidePolynomial(polynomial);
        
        int xNum = 0; 
        int baseNum = 0;     
        
        for(int i = 0; i < devidePolynomial.Length; i++)
        {
            if(devidePolynomial[i].Contains("x"))
            {
                xNum += int.Parse(GetValueX(devidePolynomial[i]));
            }
            else
            {
                baseNum += int.Parse(devidePolynomial[i]);
            }
        }
        
        return GetPolynomial(xNum, baseNum);
    }
}