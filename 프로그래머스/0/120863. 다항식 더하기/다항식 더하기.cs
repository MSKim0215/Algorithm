using System;

public class Solution
{
    public string solution(string polynomial)
    {
        string removeSpace = polynomial.Replace(" ", string.Empty);
        string[] plusSplit = removeSpace.Split("+");
        
        int xNum = 0; 
        int num = 0;     
        
        for(int i = 0; i < plusSplit.Length; i++)
        {
            if(plusSplit[i].Contains("x"))
            {
                string xValue = string.Empty;
                
                for(int j = 0; j < plusSplit[i].Length; j++)
                {
                    if(plusSplit[i][j] != 'x')
                    {
                        xValue += plusSplit[i][j].ToString();
                    }
                    else
                    {
                        if(xValue == string.Empty)
                        {
                            xValue = "1";
                        }
                    }
                }
                
                xNum += int.Parse(xValue);
            }
            else
            {
                num += int.Parse(plusSplit[i]);
            }
        }
        
        string answer = string.Empty;
        
        if(xNum != 0)
        {
            if(xNum == 1)
            {
                answer += "x";
            }
            else
            {
                answer += (xNum + "x");
            }
        }
        
        if(num > 0)
        {
            if(xNum != 0)
            {
                answer += (" + " + num);
            }
            else
            {
                answer += num;
            }
        }
        
        return answer;
    }
}