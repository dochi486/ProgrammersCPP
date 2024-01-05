#include <string>
#include <vector>

using namespace std;


string solution(string cipher, int code)
{
    string answer = "";

    for (size_t i = 0; i <= cipher.size(); ++i)
    {
        if (i % code == 0 && i != 0)
        {
            answer += cipher[i - 1];
        }
    }

    return answer;
}

// string solution(string cipher, int code) {
//     string answer = "";
//     for(int i=code-1;i<cipher.length();i+=code) {
//         answer += cipher[i];
//     }
//     return answer;
// }

int main(int argc, char* argv[])
{
    solution("dfjardstddetckdaccccdegk", 4);
    return 0;
}
