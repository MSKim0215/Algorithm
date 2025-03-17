using System;

public class Solution 
{
    public int[] solution(int[] array, int[,] commands)
    {
       int[] answer = new int[commands.GetLength(0)];
        
        for(int i = 0; i < commands.GetLength(0); i++)
        {
            var startIndex = commands[i, 0];
            var endIndex = commands[i, 1];
            var targetIndex = commands[i, 2];
            
            var tempArray = new int[endIndex - startIndex + 1];
            for(int j = 0; j < tempArray.Length; j++)
            {
                tempArray[j] = array[startIndex - 1];
                startIndex++;
            }
            
            Array.Sort(tempArray);
            
            answer[i] = tempArray[targetIndex - 1];
        }
        
        return answer;
    }
}