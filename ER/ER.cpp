#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency)
{
    vector<int> answer;
    vector<int> copy(emergency);

    sort(copy.begin(), copy.end(), greater<>());

    for(int i = 0; i < emergency.size(); ++i)
    {
        for(int j = 0; j < copy.size(); ++j)
        {
            if(copy[j] == emergency[i])
                answer.push_back(j + 1);
        }
    }
    
    return answer;
}


int main(int argc, char* argv[])
{
    solution({3, 76, 24});
    return 0;
}
