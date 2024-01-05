#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;

    for (size_t i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            answer.push_back(i);
    }

    sort(answer.begin(), answer.end());

    return answer;
}


int main(int argc, char* argv[])
{
    solution(24);
    return 0;
}
