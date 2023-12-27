
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) 
{
    if(direction =="left")
    {
        rotate(numbers.begin(),numbers.begin()+1,numbers.end());
    }
    else
    {
        rotate(numbers.begin(),numbers.end()-1,numbers.end());
    }
            
    return numbers;
}

int main(int argc, char* argv[])
{
    solution({1, 2, 3}, "right");
    return 0;
}
