#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int binaryToTen(int num)
{
    int result = 0;
    int mul = 1;

    while (num > 0)
    {
        if (num % 2 == 1)
            result += mul;

        mul *= 2;
        num /= 10;
    }

    return result;
}


string solution(string bin1, string bin2)
{
    string answer = "";

    int num1 = binaryToTen(stoi(bin1));
    int num2 = binaryToTen(stoi(bin2));

    int a = num1 + num2;

    if (bin1 == "0" && bin2 == "0")
        return "0";

    while (a != 0)
    {
        if (a % 2 == 1)
            answer.push_back('1');
        else
            answer.push_back('0');

        a /= 2;
    }
    reverse(answer.begin(), answer.end());

    return answer;
}


int main(int argc, char* argv[])
{
    return 0;
}
