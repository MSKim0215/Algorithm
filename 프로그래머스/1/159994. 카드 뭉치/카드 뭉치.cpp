#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    int cards1_index = 0;
    int cards2_index = 0;
    
    for(int i = 0; i < goal.size(); i++)
    {
        if(goal[i] != cards1[cards1_index] && goal[i] != cards2[cards2_index])
        {
            return "No";
        }
        else
        {
            if(goal[i] == cards1[cards1_index])
            {
                cards1_index++;
            }
            else
            {
                cards2_index++;
            }
        }
    }
    return "Yes";
}