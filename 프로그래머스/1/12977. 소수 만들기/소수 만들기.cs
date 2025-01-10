using System;

class Solution
{
    private bool IsPrime(int targetNum)
    {
        for(int i = 2; i < targetNum; i++)
        {
            if(targetNum % i == 0) return false;
        }
        
        return true;
    }
    
    public int solution(int[] nums)
    {
        int answer = 0;
        
        for(int i = 0; i < nums.Length; i++)
        {
            for(int j = i + 1; j < nums.Length; j++)
            {
                for(int k = j + 1; k < nums.Length; k++)
                {
                    if(IsPrime(nums[i] + nums[j] + nums[k]))
                    {
                        answer++;
                    }
                }
            }
        }
        
        return answer;
    }
}