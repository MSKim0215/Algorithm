#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<double> scores(N);
    double maxScore = 0;
    
    for(int i = 0; i < N; i++)
    {
        cin >> scores[i];
        maxScore = max(maxScore, scores[i]);
    }
    
    double totalScore = 0;
    for(int i = 0; i < N; i++)
    {
        scores[i] = scores[i] / maxScore * 100;
        totalScore += scores[i];
    }
    
    cout << fixed;
    cout.precision(2);
    cout << totalScore / N;
}