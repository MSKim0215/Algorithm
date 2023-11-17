#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) 
{
    map<int, int> attendanceRank;       // key: 학생 등수, value: 학생 번호
    
    for(int i = 0; i < rank.size(); i++)
    {
        if(attendance[i])
        {
            attendanceRank.insert({rank[i], i});
        }
    }
    
    vector<int> numbers;        // 상위권 3명 번호
    int count = 3;
    
    for(auto iter = attendanceRank.begin(); iter != attendanceRank.end(); iter++)
    {
        if(count > 0)
        {
            count--;
            numbers.push_back(iter->second);
        }
    }
    
    // 10000 × a + 100 × b + c
    return 10000 * numbers[0] + 100 * numbers[1] + numbers[2];      
}