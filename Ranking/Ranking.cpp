#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> m;    

vector<int> solution(vector<vector<int>> score) 
{
    vector<int> answer;
    vector<int> v, copy;
    int cnt = 1;
    
    for (int i = 0; i < score.size(); ++i)
    {
        v.push_back(score[i][0] + score[i][1]);
        copy.push_back(score[i][0] + score[i][1]);
    }

    // 내림차순 정렬
    sort(copy.begin(), copy.end(), greater<>());

    for(int i = 0; i < copy.size(); ++i)
    {
        if(m.find(copy[i]) == m.end())
            m[copy[i]] = cnt;
        
        cnt++;
    }

    for (int i = 0; i < v.size(); ++i)
    {
        answer.push_back(m[v[i]]);
    }
    
    return answer;
}


int main(int argc, char* argv[])
{
    solution({{80, 70}, {90, 50}, {40, 70}, {50, 80}});
    return 0;
}
