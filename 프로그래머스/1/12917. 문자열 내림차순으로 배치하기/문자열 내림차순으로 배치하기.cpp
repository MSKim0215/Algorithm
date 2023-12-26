#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

string solution(string s)
{
    sort(s.begin(), s.end(), comp);
    return s;
}