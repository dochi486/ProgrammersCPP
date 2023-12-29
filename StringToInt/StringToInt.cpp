// StringToInt.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

long long solution(string numbers) 
{
    long long answer = 0;
    vector<string> v = {"zero", "one", "two", "three","four","five","six","seven", "eight","nine"};
    //map<int, string> m;
    //string temp;
    int temp;

    for (int i = 0; i < v.size(); i++)
    {
        while ((temp = numbers.find(v[i])) != string::npos) 
        {
            numbers.replace(temp, v[i].size(), to_string(i));
        }
    }

    answer = stoll(numbers);

    //m.emplace(make_pair(0, "zero"));
    //m.emplace(make_pair(1, "one"));
    //m.emplace(make_pair(2, "two"));
    //m.emplace(make_pair(3, "three"));
    //m.emplace(make_pair(4, "four"));
    //m.emplace(make_pair(5, "five"));
    //m.emplace(make_pair(6, "six"));
    //m.emplace(make_pair(7, "seven"));
    //m.emplace(make_pair(8, "eight"));
    //m.emplace(make_pair(9, "nine"));

    
    //for (int i = 0; i < m.size(); i++)
    //{
    //    auto found = numbers.find(m.at(i));
    // 
    //    if (found != string::npos) 
    //    {
    //        v.push_back(m.at(i));
    //    }
    //}


    //for (auto k : m) 
    //{
    //    for (const auto& i : v)
    //    {
    //        if (k.second == i) 
    //        {
    //            temp += to_string(k.first);
    //        }
    //    }
    //}

    //answer = stoi(temp);

    return answer;
}

/*
#include <string>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;

    numbers = regex_replace(numbers, regex("zero"), "0");
    numbers = regex_replace(numbers, regex("one"), "1");
    numbers = regex_replace(numbers, regex("two"), "2");
    numbers = regex_replace(numbers, regex("three"),"3");
    numbers = regex_replace(numbers, regex("four"), "4");
    numbers = regex_replace(numbers, regex("five"), "5");
    numbers = regex_replace(numbers, regex("six"), "6");
    numbers = regex_replace(numbers, regex("seven"), "7");
    numbers = regex_replace(numbers, regex("eight"), "8");
    numbers = regex_replace(numbers, regex("nine"), "9");

    answer = stoll(numbers);

    return answer;
}*/

int main()
{
    solution("onefourzerosixseven");
    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
