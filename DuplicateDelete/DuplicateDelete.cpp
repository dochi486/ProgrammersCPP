#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string)
{
    string answer = "";
    vector<string> str;

    for (int i = 0; i < my_string.size(); ++i)
    {
        if (find(str.begin(), str.end(), string(1, my_string[i])) == str.end())
        {
            answer += string(1, my_string[i]);
        }
        str.push_back(string(1, my_string[i]));
    }

    return answer;
}

/*
* string solution(string my_string) {
    string answer = "";
    for(auto i : my_string){
        if(answer.find(i)==std::string::npos)
            answer+=i;
    }
    return answer;
}
 */

int main(int argc, char* argv[])
{
    solution("people");
    return 0;
}
