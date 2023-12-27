#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;

    sort(numbers.begin(),numbers.end());   

    int n = numbers.size();
    
    return max(numbers[n-1]*numbers[n-2],numbers[0]*numbers[1]);
}

int main(int argc, char* argv[])
{
    solution({1, 2, -3, 4, -5});    
    return 0;
}
