#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;

    auto num_str = to_string(order);
    auto find_str3 = to_string(3);
    auto find_str6 = to_string(6);
    auto find_str9 = to_string(9);

    for(int i = 0; i < num_str.size(); ++i)
    {
        if(num_str[i] == find_str3[0])
        {
            answer++;
        }

        if(num_str[i] == find_str6[0])
        {
            answer++;
        }

        if(num_str[i] == find_str9[0])
        {
            answer++;
        }
    }
    
    return answer;
}

/*
*    string str = to_string(order);
    for (int i = 0; i < str.length(); i++) {
        switch (str[i]) {
            case '3':
            case '6':
            case '9':
                answer++;
        }    
    }
 * 
 */


int main(int argc, char* argv[])
{
    solution(29423);
    return 0;
}
