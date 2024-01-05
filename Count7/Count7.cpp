#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array)
{
    int answer = 0;

    for (int i : array)
    {
        auto a = to_string(i);

        for (auto it : a)
        {
            if (it == '7')
                answer++;
        }
    }

    return answer;
}

int main(int argc, char* argv[])
{
    solution({7, 77, 17});
    return 0;
}
