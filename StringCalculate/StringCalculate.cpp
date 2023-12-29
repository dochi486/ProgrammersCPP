#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    string cal;
    
    stringstream ss(my_string);
    vector<string> v;
	string temp;

    while(ss >> temp)
    {
        v.push_back(temp);
    }

    answer = stoi(v[0]);

    for(int i = 0; i < v.size(); ++i)
    {
        if(v[i] == "+")
        {
        	answer += stoi(v[i + 1]);
        }
        else if(v[i] == "-")
        {
        	answer -= stoi(v[i + 1]);
        }
    }
    
    return answer;
}

int main(int argc, char* argv[])
{
    solution("3 + 4 - 2 + 5 + 7 + 8 - 2 - 2 - 3 - 5");
    return 0;
}
