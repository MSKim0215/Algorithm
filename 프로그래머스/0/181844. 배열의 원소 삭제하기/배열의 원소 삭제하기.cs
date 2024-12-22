using System;
using System.Collections.Generic;
using System.Linq;

public class Solution 
{
    public int[] solution(int[] arr, int[] delete_list) 
    {
        List<int> arrList = arr.ToList();

        for (int i = 0; i < delete_list.Length; i++)
        {
            var checkNum = delete_list[i];

            for(int j = 0; j < arrList.Count; j++)
            {
                if(checkNum == arrList[j])
                {
                    arrList.RemoveAt(j);
                    break;
                }
            }
        }
        return arrList.ToArray();
    }
}