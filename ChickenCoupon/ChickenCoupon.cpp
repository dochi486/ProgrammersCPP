#include <string>
#include <vector>

using namespace std;

int solution(int chicken) 
{
    int tmp = 0;
    int coupon = 0;
    int service = 0;

    tmp = chicken;
    while(tmp)
    {
        service += tmp / 10;
        coupon += tmp % 10;
        tmp /= 10;

        if(coupon >= 10)
        {
            service += coupon / 10;
            coupon += coupon / 10;
            coupon = coupon % 10;
        }
    }

    return service;
}


int main(int argc, char* argv[])
{
    solution(100);
    return 0;
}
