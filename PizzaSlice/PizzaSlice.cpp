#include <string>
#include <vector>

using namespace std;


int gcd(int a, int b)
{
    int n = 0;

    while(b != 0)
    {
        n = a % b;
        a = b;
        b = n;
    }

    return a;
}

int lcm(int a, int b)
{
    // 최소 공배수는 최대 공약수를 알고 있다면.. 두 수를 곱한 뒤에 최대공약수로 나누면됨.
    return a * b / gcd(a, b);
}

int solution(int n)
{
    int answer = 0;
    // 피자를 6조각으로 잘라줌

    if(n % 6 != 0)
    {
        // 남기지 않고 모두 같은 수의 피자를 먹는다. (최소 공배수)
        answer = lcm(n, 6) / 6;            
    }
    else
    {
        answer = n / 6;
    }
    
    return answer;
}

int main(int argc, char* argv[])
{
    solution(10);
    return 0;
}
