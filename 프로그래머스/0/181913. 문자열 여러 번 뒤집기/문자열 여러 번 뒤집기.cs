using System;

public class Solution 
{
    public string solution(string my_string, int[,] queries)
    {
        var answer = my_string.ToCharArray();

        for (int i = 0; i < queries.GetLength(0); i++)
        {
            var startIndex = queries[i, 0];
            var endIndex = queries[i, 1];

            int targetLength = endIndex - startIndex + 1;
            Array.Reverse(answer, startIndex, targetLength);
        }

        return new string(answer);
    }
}