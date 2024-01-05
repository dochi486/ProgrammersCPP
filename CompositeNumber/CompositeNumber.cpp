#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;

    // 가장 작은 합성수는 4니가 4부터 시작
    // n까지 나눠보면서 약수를 찾고
    for (int i = 4; i <= n; ++i)
    {
        int count = 0;
        // 약수가 3개 이상이면 합성수
        for (int j = 1; j <= i; ++j)
        {
            if (i % j == 0)
                count++;
        }

        if (count >= 3)
        {
            answer++;
        }
    }

    return answer;
}


int main(int argc, char* argv[])
{
    solution(15);
    return 0;
}
