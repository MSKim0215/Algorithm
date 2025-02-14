#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

class Position
{
    private:
        int x = 0;
        int y = 0;
    
    public:
        void SetPosition(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
    
        int GetX()
        {
            return x;
        }
    
        int GetY()
        {
            return y;
        }
};

string solution(vector<int> numbers, string hand)
{   
    string result = "";     
    
    map<int, string> numberHandMap =
    {   // 숫자, 누르는 손위치
        { 1, "L" }, { 4, "L" }, { 7, "L" },
        { 3, "R" }, { 6, "R" }, { 9, "R" }
    };
    
    map<int, Position> numberPositionMap;   // 숫자, 번호 위치값
    for(int i = 0; i < 10; i++)
    {
        Position pos;
        numberPositionMap.insert(pair<int, Position>(i, pos));
    }
    
    numberPositionMap[0].SetPosition(1, 3);
    
    int number = 1;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            numberPositionMap[number].SetPosition(j, i);
            number++;
        }
    }
    
    Position leftHand, rightHand;
    leftHand.SetPosition(0, 3);
    rightHand.SetPosition(2, 3);
    
    for(int i = 0; i < numbers.size(); i++)
    {
        int pushNumber = numbers[i];      // 누르는 숫자
        int numberX = numberPositionMap[pushNumber].GetX();
        int numberY = numberPositionMap[pushNumber].GetY();
        
        if(numberHandMap.find(pushNumber) != numberHandMap.end())
        {   // 누르는 손이 정해진 숫자라면
            string targetHand = numberHandMap[pushNumber];
            result += targetHand;
            
            if(targetHand == "L")
            {   // 왼손 이동
                leftHand.SetPosition(numberX, numberY);
            }
            else
            {   // 오른손 이동
                rightHand.SetPosition(numberX, numberY);
            }
        }
        else
        {   // 정해진 숫자가 아니라면
            int rightMoveCount =   
                max(rightHand.GetX(), numberX) - min(rightHand.GetX(), numberX) +
                max(rightHand.GetY(), numberY) - min(rightHand.GetY(), numberY);
            
            int leftMoveCount = 
                max(leftHand.GetX(), numberX) - min(leftHand.GetX(), numberX) +
                max(leftHand.GetY(), numberY) - min(leftHand.GetY(), numberY);
            
            if(rightMoveCount < leftMoveCount)
            {   // 오른손이 더 가까우면
                rightHand.SetPosition(numberX, numberY);
                result += "R";
            }
            else if(rightMoveCount > leftMoveCount)
            {   // 왼손이 더 가까우면
                leftHand.SetPosition(numberX, numberY);
                result += "L";
            }
            else
            {   // 둘다 같은 거리에 있다면 손잡이에 따라 이동
                if(hand == "right")
                {   // 오른손 이동
                    rightHand.SetPosition(numberX, numberY);
                    result += "R";
                }
                else
                {   // 왼손 이동
                    leftHand.SetPosition(numberX, numberY);
                    result += "L";
                }
            }
        }
    }
    
    return result;
}