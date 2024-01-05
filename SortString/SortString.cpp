#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string)
{
    vector<int> answer;

    for (size_t i = 0; i < my_string.size(); ++i)
    {
        if (isdigit(my_string[i]))
        {
            answer.push_back(stoi(my_string.substr(i, 1)));
        }
    }

    sort(answer.begin(), answer.end());

    // for(char c : my_string)
    //     if(c>=48 && c<58) answer.push_back(c-48);
    // sort(answer.begin(), answer.end());

    return answer;
}


int main(int argc, char* argv[])
{
    solution("hi12392");

    return 0;
}
