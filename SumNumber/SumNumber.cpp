#include <string>
#include <vector>

using namespace std;

int solution(string my_string)
{
    int answer = 0;
    int n = 0;
    // vector<int> v;

    for (int i = 0; i < my_string.size(); ++i)
    {
        if (isdigit(my_string[i]))
        {
            n = n * 10 + my_string[i] - '0';
            // v.push_back(stoi(my_string.substr(i, 1)));
        }
        else
        {
            answer += n;
            n = 0;
        }
    }

    // for(int a : v)
    // {
    //     answer += a;
    // }
    answer += n;

    return answer;
}

int main(int argc, char* argv[])
{
    solution("aAb1B2cC34oOp");
    return 0;
}
