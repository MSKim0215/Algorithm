#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool CompareOfIndex(vector<int> &v1, vector<int> &v2, int targetIndex)
{
  return v1[targetIndex] < v2[targetIndex];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) // data[x][0]: 코드번호, data[x][1]: 제조일, data[x][2]: 최대 수량, data[x][3]: 현재 수량
{   // ext, sort_by: code, date, maximum, remain
    vector<int> targetIndex;
    
    for(int i = 0; i < data.size(); i++)
    {
        if(ext == "code")
        {
            if(data[i][0] < val_ext)
            {
                targetIndex.push_back(i);
            }
        }
        else if(ext == "date")
        {
            if(data[i][1] < val_ext)
            {
                targetIndex.push_back(i);
            }
        }
        else if(ext == "maximum")
        {
            if(data[i][2] < val_ext)
            {
                targetIndex.push_back(i);
            }
        }
        else if(ext == "remain")
        {
            if(data[i][3] < val_ext)
            {
                targetIndex.push_back(i);
            }
        }
    }
    
    vector<vector<int>> answer;
    
    for(int i = 0; i < targetIndex.size(); i++)
    {
        int index = targetIndex[i];
        answer.push_back(data[index]);
    }
    
    int sortIndex = 0;
    if(sort_by == "code") sortIndex = 0;
    else if(sort_by == "date") sortIndex = 1;
    else if(sort_by == "maximum") sortIndex = 2;
    else if(sort_by == "remain") sortIndex = 3;
    
    sort(answer.begin(), answer.end(), 
         bind(CompareOfIndex, placeholders::_1, placeholders::_2, sortIndex));
    
    return answer;
}