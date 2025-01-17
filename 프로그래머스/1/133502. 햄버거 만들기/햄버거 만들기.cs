using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(int[] ingredients)
    {
        int answer = 0;
        List<int> stack = new List<int>();

        foreach (var ingredient in ingredients)
        {
            stack.Add(ingredient);

            if (stack.Count >= 4)
            {
                if (stack[stack.Count - 1] == 1 &&    // 가장 위
                    stack[stack.Count - 2] == 3 &&    // 그 아래
                    stack[stack.Count - 3] == 2 &&    // 그 아래
                    stack[stack.Count - 4] == 1)      // 가장 아래
                {
                    answer++;

                    stack.RemoveRange(stack.Count - 4, 4);
                }
            }
        }

        return answer;
    }
}
