#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int C;
    cin >> C;
    
    for(int i = 0; i < C; i++)
    {
        int N;
        cin >> N;
        
        vector<int> scores(N);
        int totalScore = 0;
        for(int j = 0; j < N; j++)
        {
            cin >> scores[j];
            totalScore += scores[j];
        }
        
        int count = 0;               // 평균이 넘는 학생수
        int avg = totalScore / N;    // 학생 평균 점수
        for(int j = 0; j < N; j++)
        {
            if(scores[j] > avg)
            {
                count++;
            }
        }
        
       double percent = (double)count / N * 100;
       cout.precision(3);
        cout << fixed << percent << "%\n";
    }
}