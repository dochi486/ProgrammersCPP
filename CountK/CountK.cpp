#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k)
{
    int answer = 0;


    // 해당 범위 내에서 10으로 나눈 나머지가 k이면 + 1 이라는데 왜지...?
    for (int a = i; a <= j; ++a)
    {
        int b = a;
        while (true)
        {
            if (b == 0)
                break;
            if (b % 10 == k)
                answer++;

            b /= 10;
        }
    }


    // 내 답안.. 1을 찾을 경우 11을 처리 못함 ㅠ
    // vector<int> v;
    // auto find_num = to_string(k);
    //
    // for (int a = i; a <= j; ++a)
    // {
    //     auto str = to_string(a);
    //
    //     for (int b = 0; b < str.size(); ++b)
    //     {
    //         auto found = str.find(find_num);
    //
    //         if(found != std::string::npos)
    //         {
    //             answer++;
    //         }
    //     }
    // }

    return answer;
}


int main(int argc, char* argv[])
{
    solution(1, 13, 1);
    return 0;
}
