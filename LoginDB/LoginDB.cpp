//
// Created by mskim on 2024-01-05.
//
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db)
{
    string answer = "";

    // id, pw 모두 일치하면 login
    // id만 일치하면 wrong pw
    // 아예 없는 데이터면 fail
    for (auto id : db)
    {
        if (id_pw[0] == id[0] && id_pw[1] == id[1])
            answer = "login";
        else if (id_pw[0] == id[0])
            answer = "wrong pw";
        else
            answer = "fail";
    }

    return answer;
}

int main(int argc, char* argv[])
{
    solution({"meosseugi", "1234"}, {{"rardss", "123"}, {"yyoom", "1234"}, {"meosseugi", "1234"}});
    return 0;
}
