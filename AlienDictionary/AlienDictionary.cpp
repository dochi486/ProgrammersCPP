#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) 
{
    // int answer = 0;
    //
    // // spell에 있는 단어를 한 번씩 모두 사용한 단어가 dic에 있으면 1 아니면 2
    // for (int i = 0; i < spell.size(); ++i)
    // {
    //     for(auto word : dic)
    //     {
    //         if(word.find(spell[i]) != string::npos)
    //         {
    //             
    //         }
    //     }
    // }
    int num = spell.size();
    bool check = false;

    for (int i = 0; i < dic.size(); ++i)
    {
        if(dic[i].size() == num)
        {
            check = true;
        }

        for (int j = 0; j < num; ++j)
        {
            if(dic[i].find(spell[j]) == string::npos)
            {
                check = false;
                break;
            }
        }

        if(check == true)
        {
            return 1;
        }
    }
    
    return 2;
}


int main(int argc, char* argv[])
{
    solution({"p", "o", "s"}, {"sod", "eocd", "qixm", "adio", "soo"});
    return 0;
}
