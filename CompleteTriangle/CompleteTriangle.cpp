#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//https://tnsgh9603.tistory.com/137
//https://tarra.tistory.com/entry/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-%EC%82%BC%EA%B0%81%ED%98%95%EC%9D%98-%EC%99%84%EC%84%B1%EC%A1%B0%EA%B1%B4-2-C
int solution(vector<int> sides)
{
    int answer = 0;

    int a = sides[0];
    int b = sides[1];

    if (a > b)
    {
        swap(a, b);
    }

    // b가 제일 긴 변일 경우
    for (int i = 1; i <= b; ++i)
    {
        if (b < a + i)
        {
            answer++;
        }
    }

    // 다른 주어지지 않은 한 변이 가장 클 경우
    for (int i = b + 1; i < 999999; ++i)
    {
        if (i < a + b)
        {
            answer++;
            continue;
        }
        break;
    }

    return answer;
}


int main(int argc, char* argv[])
{
    solution({3, 6});
    return 0;
}
