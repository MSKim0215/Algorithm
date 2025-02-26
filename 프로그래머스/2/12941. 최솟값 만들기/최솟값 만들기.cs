using System;

public class Solution
{
    public int solution(int[] A, int[] B)
    {
        Array.Sort(A);
        Array.Sort(B, (num1, num2) => num2.CompareTo(num1));
        
        int answer = 0;
        
        for(int i = 0; i < A.Length; i++)
        {
            var valueA = A[i];
            var valueB = B[i];
            
            answer += (valueA * valueB);
        }
        
        return answer;
    }
}