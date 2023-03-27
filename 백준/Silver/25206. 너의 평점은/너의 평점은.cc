#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double GetGradeScore(string _grade)
{
    if(_grade == "A+") return 4.5;
    else if(_grade == "A0") return 4.0;
    else if(_grade == "B+") return 3.5;
    else if(_grade == "B0") return 3.0;
    else if(_grade == "C+") return 2.5;
    else if(_grade == "C0") return 2.0;
    else if(_grade == "D+") return 1.5;
    else if(_grade == "D0") return 1.0;
    else if(_grade == "F") return 0.0;
}

int main()
{
    double totalScore = 0;         // 학점 총합
    double totalGradeScore = 0;    // 학점 x 과목평점 총합
    
    for(int i = 0; i < 20; i++)
    {
        string name;        // 전공 과목
        double score;       // 학점
        string grade;       // 등급
        cin >> name >> score >> grade;
        
        if(grade != "P")
        {
            totalScore += score;
            
            double grade_Score = GetGradeScore(grade);    // 과목평점
            totalGradeScore += (score * grade_Score);      
        }
    }
    
    cout << setprecision(6) << fixed << (totalGradeScore / totalScore);
}