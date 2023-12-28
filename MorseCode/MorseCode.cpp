
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

map<string, char> m;
string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..",
    "--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

string solution(string letter)
{
    string answer = "";
    string str = "";

    char c = 'a';

    stringstream ss(letter);

    for(int i = 0; i < 26; ++i)
    {
        m[arr[i]] = c + i;
    }

    while(ss >> str)
    {
        answer += m[str];
    }
    
    return answer;
}

/*
*string solution(string letter) {
    string answer = "";
    string temp;

    for (auto i : letter+" ") {
        if (i != ' ') { temp += i; }
        else {
            if (temp == ".-") { answer += 'a'; }
            else if (temp == "-...") { answer += 'b'; }
            else if (temp == "-.-.") { answer += 'c'; }
            else if (temp == "-..") { answer += 'd'; }
            else if (temp == ".") { answer += 'e'; }
            else if (temp == "..-.") { answer += 'f'; }
            else if (temp == "--.") { answer += 'g'; }
            else if (temp == "....") { answer += 'h'; }
            else if (temp == "..") { answer += 'i'; }
            else if (temp == ".---") { answer += 'j'; }
            else if (temp == "-.-") { answer += 'k'; }
            else if (temp == ".-..") { answer += 'l'; }
            else if (temp == "--") { answer += 'm'; }
            else if (temp == "-.") { answer += 'n'; }
            else if (temp == "---") { answer += 'o'; }
            else if (temp == ".--.") { answer += 'p'; }
            else if (temp == "--.-") { answer += 'q'; }
            else if (temp == ".-.") { answer += 'r'; }
            else if (temp == "...") { answer += 's'; }
            else if (temp == "-") { answer += 't'; }
            else if (temp == "..-") { answer += 'u'; }
            else if (temp == "...-") { answer += 'v'; }
            else if (temp == ".--") { answer += 'w'; }
            else if (temp == "-..-") { answer += 'x'; }
            else if (temp == "-.--") { answer += 'y'; }
            else if (temp == "--..") { answer += 'z'; }
            temp.clear();
        }
    }
    return answer;
}
 * 
 */

int main(int argc, char* argv[])
{
    solution(".... . .-.. .-.. ---");
    return 0;
}
