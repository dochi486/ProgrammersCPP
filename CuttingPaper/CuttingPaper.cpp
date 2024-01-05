#include <string>
#include <vector>

using namespace std;

int solution(int M, int N)
{
    int answer = 0;

    answer = M * N - 1;

    return answer;
}

int main(int argc, char* argv[])
{
    solution(2, 5); // result : 9
    return 0;
}
