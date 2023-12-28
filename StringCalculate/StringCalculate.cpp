#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    string cal;
    
    stringstream ss(my_string);
    string temp;
    while(ss >> temp)
    {
        cal += temp;
    }

    for(auto c : cal)
    {
        switch (c)
        {
            
            default:
                break;
        }
    }
    
    return answer;
}

int main(int argc, char* argv[])
{
    solution("3 + 4");
    return 0;
}
