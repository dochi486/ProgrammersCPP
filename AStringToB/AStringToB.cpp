#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int solution(string before, string after)
{
    int answer = 0;

    sort(before.begin(), before.end());
    sort(after.begin(), after.end());

    if(before == after)
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }
    
    return answer;
}


int main(int argc, char* argv[])
{
    
    return 0;
}