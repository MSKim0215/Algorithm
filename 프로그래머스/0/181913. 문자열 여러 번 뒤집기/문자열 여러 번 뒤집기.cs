using System;

public class Solution 
{
    private string ReverseString(string targetStr)
    {
        string answer = string.Empty;
        for (int i = targetStr.Length - 1; i >= 0; i--)
        {
            answer += targetStr[i];
        }
        return answer;
    }

    public string solution(string my_string, int[,] queries)
    {
        var answer = my_string;

        for (int i = 0; i < queries.GetLength(0); i++)
        {
            var startIndex = queries[i, 0];
            var endIndex = queries[i, 1];

            int targetLength = endIndex - startIndex + 1;
            var subStr = answer.Substring(startIndex, targetLength);
            answer = answer.Remove(startIndex, targetLength);
            answer = answer.Insert(startIndex, ReverseString(subStr));
        }

        return answer;
    }
}