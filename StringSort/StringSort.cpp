#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string)
{
    string answer = "";

    for (int i = 0; i < my_string.size(); ++i)
    {
        answer += tolower(my_string[i]);
    }

    sort(answer.begin(), answer.end());

    return answer;
}

/*
* string solution(string my_string) {
    for(auto& ch : my_string)
    {
        ch = tolower(ch);
    }
    sort(my_string.begin(), my_string.end());
    return my_string;
}
 */


int main(int argc, char* argv[])
{
    solution("Bcad");
    return 0;
}
