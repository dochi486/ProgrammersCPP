#include <string>
#include <vector>

using namespace std;

// 저주받은 숫자 3
int solution(int n)
{
    int answer = 0;
    int cnt = 1, m = 1;
    
    while (1)
    {
        bool check = false;
        string s = to_string(m);

        if(m % 3 == 0)
        {
            m += 1;
            continue;
        }
        else
        {
            for (int i = 0; i < s.size(); ++i)
            {
                if(s[i] == '3')
                {
                    m += 1;
                    check = true;
                    break;
                }
            }
        }

        if(check)
            continue;

        if( cnt == n )
            break;

        cnt++;
        m++;
    }
    return m;
    
    // 1 1  
    // 2 2  
    // 3 4  
    // 4 5  
    // 5 7  
    // 6 8  
    // 7 10 
    // 8 11 
    // 9 14 
    // 10 16 
    // 11 17
    // 12 19
    // 13 20
    // 14 22
    // 15 25
    // 16 26
    // 17 28
    // 18 29
    // 19 40
    // 20 41
    // 21 44
    // 40 76 
}



int main(int argc, char* argv[])
{
    solution(15);
    return 0;
}
