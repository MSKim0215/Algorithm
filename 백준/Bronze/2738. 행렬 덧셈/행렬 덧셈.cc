#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    int A[N][M], B[N][M];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> B[i][j];
        }
    }
    
    int result[N][M];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}