#include<iostream>

using namespace std;

int main()
{
    int students[30];
    int studentCount = sizeof(students) / sizeof(*students);
    for(int i = 0; i < studentCount; i++)
    {
        students[i] = i + 1;
    }
    
    int completes[28];
    int completeCount = sizeof(completes) / sizeof(*completes);
    for(int i = 0; i < completeCount; i++)
    {
        cin >> completes[i];
    }
    
    int min = -1, max = -1;
    for(int i = 0; i < studentCount; i++)
    {
        bool isPass = false;
        for(int j = 0; j < completeCount; j++)
        {
            if(completes[j] == students[i])
            {
                isPass = true;
                break;
            }
        }
        
        if(!isPass)
        {
            if(min == -1) min = students[i];
            else if(max == -1) max = students[i];
        }
    }
    
    if(min > max)
    {
        int temp = max;
        max = min;
        min = temp;
    }
    
    cout << min << "\n";
    cout << max << "\n";
}