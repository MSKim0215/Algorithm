#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

long long solution(long long n) 
{
    long long answer = 0;
    vector<int> arr;
    
    string changeNum = to_string(n);
    for(int i = 0; i < changeNum.length(); i++)
    {
        string temp = "";
        temp += changeNum[i];
        arr.push_back(stoi(temp));
    }
    
    sort(arr.begin(), arr.end(), comp);
    
    string result = "";
    for(int i = 0; i < arr.size(); i++)
    {
        result += to_string(arr[i]);
    }
    
    return stoll(result);
}