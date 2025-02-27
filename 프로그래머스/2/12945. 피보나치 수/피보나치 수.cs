public class Solution 
{
    public int solution(int n)
    {
        int numberA = 0;        // 시작은 0번째 피보나치 수
        int numberB = 1;        // 시작은 1번째 피보나치 수
        int nextNumber = 0;
        
        for (int i = 2; i <= n; i++)
        {
            nextNumber = (numberA + numberB) % 1234567;
            numberA = numberB;
            numberB = nextNumber;
        }
        
        return nextNumber;
    }
}