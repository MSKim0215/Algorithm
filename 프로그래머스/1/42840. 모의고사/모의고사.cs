using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int CheckStudent3(int[] answers)
    {
        int answerValue = 3;
        int doubleCount = 1;    // Max: 2
        int doubleCheck = 0;    // 0 - 3, 1 - 1, 2 - 2, 3 - 4, 4 - 5
        int sameCount = 0;
        
        // 3번 수포자 찍는 방식
        for(int i = 0; i < answers.Length; i++)
        {
            if(answers[i] == answerValue)
            {
                sameCount++;
            }
            
            if(doubleCount == 1)
            {
                doubleCount++;
            }
            else
            {
                doubleCount = 1;
                doubleCheck++;
                if(doubleCheck > 4) doubleCheck = 0;
                
                if(doubleCheck == 0)
                {
                    answerValue = 3;
                }
                else if(doubleCheck == 1)
                {
                    answerValue = 1;
                }
                else if(doubleCheck == 2)
                {
                    answerValue = 2;
                }
                else if(doubleCheck == 3)
                {
                    answerValue = 4;
                }
                else if(doubleCheck == 4)
                {
                    answerValue = 5;
                }
            }
        }
        
        return sameCount;
    }
    
    public int CheckStudent2(int[] answers)
    {
        int answerValue = 2;
        int doubleCheck = 0; // 0 ~ 3 
        int sameCount = 0;
        
        // 2번 수포자 찍는 방식
        for(int i = 0; i < answers.Length; i++)
        {
            if(answers[i] == answerValue)
            {
                sameCount++;
            }
            
            if(answerValue == 2)
            {
                if(doubleCheck == 0)
                {
                    answerValue = 1;
                }
                else if(doubleCheck == 1)
                {
                    answerValue = 3;
                }
                else if(doubleCheck == 2)
                {
                    answerValue = 4;
                }
                else if(doubleCheck == 3)
                {
                    answerValue = 5;
                }
                
                doubleCheck++;
                if(doubleCheck > 3) doubleCheck = 0;
            }
            else
            {
                answerValue = 2;
            }
        }
        
        return sameCount;
    }
    
    public int CheckStudent1(int[] answers)
    {
        int answerValue = 1;
        int sameCount = 0;
        
        // 1번 수포자 찍는 방식
        for(int i = 0; i < answers.Length; i++)
        {
            if(answers[i] == answerValue)
            {
                sameCount++;
            }
          
            answerValue++;
            if(answerValue > 5) answerValue = 1;
        }
        
        return sameCount;
    }
    
    public int[] solution(int[] answers)
    {
        List<int> studentList = new List<int>();
        int studentCount = 1;
        int maxCount = 0;
        
        int student1Count = CheckStudent1(answers);
        if(maxCount < student1Count)
        {
            studentList.Clear();
            studentList.Add(studentCount);
            maxCount = student1Count;
        }
        else if(maxCount == student1Count)
        {
            studentList.Add(studentCount);
        }
        studentCount++;
 
        int student2Count = CheckStudent2(answers);
        if(maxCount < student2Count)
        {
            studentList.Clear();
            studentList.Add(studentCount);
            maxCount = student2Count;
        }
        else if(maxCount == student2Count)
        {
            studentList.Add(studentCount);
        }
        studentCount++;
        
        int student3Count = CheckStudent3(answers);
        if(maxCount < student3Count)
        {
            studentList.Clear();
            studentList.Add(studentCount);
            maxCount = student3Count;
        }
        else if(maxCount == student3Count)
        {
            studentList.Add(studentCount);
        }
        
        return studentList.ToArray();
    }
}