#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    auto num_str = to_string(num);
    auto find_str = to_string(k);
    
    for (int i = 0; i < num_str.size(); ++i)
    {
        char a = num_str[i];
        int b = stoi(&a);
        if(b == k)
        {
            answer = i + 1;
            break;
        }
        
        if(num_str.find(find_str) == string::npos)
        {
            answer = -1;
        }
    }
    
    return answer;
}

/*
* int solution(int num, int k) {
    string tmp = to_string(num);
    int answer = -1;    
    for(int i =0; i < tmp.size(); ++i)
    {
        if(tmp[i] -'0' == k)
        {
            answer = i+1;
            break;
        }
    }
    return answer;
}
 */


int main(int argc, char* argv[])
{
    solution(232443, 4);
    
    return 0;
}
