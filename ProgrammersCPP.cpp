

#include <string>
#include <vector>

using namespace std;

string solution(string rsp)
{
    string answer = "";

    //가위는 2 바위는 0 보는 5로 표현
    //

    for (auto value : rsp)
    {
        switch (value)
        {
            case '2':
                answer += "0";
                break;
            case '0':
                answer += "5";
                break;
            case '5':
                answer += "2";
                break;
            default:
                break;
            
        }
    }
    
    return answer;
}

int main(int argc, char* argv[])
{
    solution("205");
    
    return 0;
}
