#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2)
{
    string answer = "";

    auto temp = ' ';
    temp = my_string[num1];
    my_string[num1] = my_string[num2];
    my_string[num2] = temp;

    return my_string;
}

/*
* string solution(string my_string, int num1, int num2) {
    swap(my_string[num1],my_string[num2]);
    return my_string;
}
 */

int main(int argc, char* argv[])
{
    solution("hello", 1, 2);

    return 0;
}
