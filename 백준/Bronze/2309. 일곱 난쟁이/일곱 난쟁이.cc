#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> heightVec;    // 일곱 난쟁이의 키
    
    int totalSum = 0;
    int inputHeight;
    for(int i = 0; i < 9; i++)
    {   // 9명의 키를 입력 받는다.
        cin >> inputHeight;
        heightVec.push_back(inputHeight);
        totalSum += inputHeight;
    }
    
    sort(heightVec.begin(), heightVec.end());   // 오름차순 정렬
    
    int targetA, targetB;
    for(int i = 0; i < heightVec.size(); i++)
    {   
        bool isPass = false;
        targetA = heightVec[i];
        
        for(int j = i + 1; j < heightVec.size(); j++)
        {
            targetB = heightVec[j];
            int otherSum = targetA + targetB;
            
            if(totalSum - otherSum == 100)
            {  
                isPass = true;
                break;
            }
        }
        
        if(isPass) break;
    }
    
    cout << "\n";
    for(int height : heightVec)
    {
        if(height == targetA || height == targetB) continue;
        cout << height << "\n";
    }
}