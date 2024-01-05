#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n)
{
    int answer = 0;

    vector<pair<int, int>> v;

    for (int i = 0; i < array.size(); ++i)
    {
        v.push_back(make_pair(abs(array[i] - n), array[i]));
    }

    sort(v.begin(), v.end());

    answer = v[0].second;

    // 내 답안(안됨)
    // int temp = 0;
    // vector<int> v;
    // vector<int> vt;
    //
    // for(int i : array)
    // {
    //     if(temp < n)
    //         temp = n - i;
    //     
    //     auto distance =  abs(temp);
    //     v.push_back(distance);
    //     vt.push_back(temp);
    // }
    //
    // sort(v.begin(), v.end());
    // sort(vt.begin(),vt.end());
    //
    // answer = n + vt[0];

    return answer;
}


int main(int argc, char* argv[])
{
    solution({10, 11, 12}, 13);
    return 0;
}
