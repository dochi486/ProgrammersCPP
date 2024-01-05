#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

string solution(string s)
{
    string answer = "";

    // map은 오름차순 정렬되므로 정렬할 필요가 없음
    map<char, int> m;

    for (int i = 0; i < s.size(); ++i)
    {
        m[s[i]]++;
    }

    for (auto i : m)
    {
        if (i.second == 1)
        {
            answer += i.first;
        }
    }

    return answer;
}


int main(int argc, char* argv[])
{
    return 0;
}
