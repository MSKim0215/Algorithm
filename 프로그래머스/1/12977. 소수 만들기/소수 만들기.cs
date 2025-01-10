using System;

class Solution
{
    public int solution(int[] nums)
    {
        int answer = 0;
        for(int i = 0; i < nums.Length; i++)
        {
            for(int j = i + 1; j < nums.Length; j++)
            {
                for(int k = j + 1; k < nums.Length; k++)
                {
                    var sumNum = nums[i] + nums[j] + nums[k];
                    int count = 0;
                    for(int h = 2; h < sumNum; h++)
                    {
                        if(sumNum % h == 0)
                        {
                            count++;
                            break;
                        }
                    }
                    
                    if(count == 0) answer++;
                }
            }
        }
        
        return answer;
    }
}