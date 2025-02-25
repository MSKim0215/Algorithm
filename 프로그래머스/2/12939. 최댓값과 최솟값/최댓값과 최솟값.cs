using System;
using System.Linq;

public class Solution 
{
    public string solution(string s)
    {
        var splitStr = s.Split(" ").Select(int.Parse).ToArray();
        return splitStr.Min() + " " + splitStr.Max();
    }
}