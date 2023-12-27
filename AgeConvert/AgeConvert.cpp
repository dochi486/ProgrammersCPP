#include <string>
#include <vector>

using namespace std;

/*
    아스키코드를 활용하였습니다.
    숫자에 +49를 하면 소문자가 됩니다.
*/

string solution(int age)
{
    string answer = "";
    string s = to_string(age);
    
    for(int i=0; i<s.size(); i++)
    {
        answer+=(s[i]+49);
    }
    
    return answer;
}
/*
* string solution(int age) {
    string answer = to_string(age);

    for(auto& v : answer)
    {
        v += 'a'-'0';
    }

    return answer;
}
 */


int main(int argc, char* argv[])
{
    
    return 0;
}
