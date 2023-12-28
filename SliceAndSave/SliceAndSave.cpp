#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) 
{
    vector<string> answer;

    // for(int i = 0; i < my_str.size(); ++i)
    // {
    //     auto str = string(my_str[i], 6);
    // }
    int cnt = (my_str.size() - 1) / n + 1;
    int idx = 0;
    
    while(cnt--)
    {
        if(cnt == 0)
            answer.push_back(my_str.substr(idx));
        else
            answer.push_back(my_str.substr(idx, n));

        idx += n;
    }
    
    return answer;
}

/*
*vector<string> solution(string my_str, int n)
{
    vector<string> answer;
    for (int i=0; i < my_str.length(); i += n)
    {
        answer.push_back(my_str.substr(i,n));
    }
    return answer;
}
 * 
 */

int main(int argc, char* argv[])
{
    solution("abc1Addfggg4556b", 6);
    return 0;
}
