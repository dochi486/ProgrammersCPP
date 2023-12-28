#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s)
{
    int answer = 0;
    vector<string> s_vector;


    //문자열에서 공백 정리하는 거 공식.. 
    stringstream ss(s);
    string temp;

    while(ss >> temp)
    {
        s_vector.push_back(temp);
    }

    for (int i = 0; i < s_vector.size(); ++i)
    {
        if(s_vector[i] == "Z")
            answer -= stoi(s_vector[i -1]);
        else
            answer += stoi(s_vector[i]);
    }
    
    return answer;
}

/*
* #include <string>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;

    stringstream ss;
    ss.str(s);

    stack<int> st;

    int t = 0;
    string tmp = "0";
    while(ss>>tmp)
    {
        if(tmp == "Z")
        {
            st.pop();
        }
        else
        {        
            t = stoi(tmp);
            st.push(t);
        }
    }

    while(!st.empty())
    {
        answer += st.top();
        st.pop();
    }

    return answer;
}
 */

int main(int argc, char* argv[])
{
    solution("1 2 Z 3");
    return 0;
}
