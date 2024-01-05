#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int sum = 1;

    for (int i = 1; i <= n; ++i)
    {
        sum *= i;

        if (sum > n)
        {
            answer = i - 1;
            break;
        }

        answer = i;
    }

    return answer;
}

int main(int argc, char* argv[])
{
    solution(2);
    return 0;
}
