#include "Ant.h"
#include <string>
#include <vector>

using namespace std;

static int solution(int hp)
{
    int answer = 0;

    int admiral = 5;
    int soldier = 3;
    int worker = 1;

    do
    {
        if (hp % admiral != 0)
        {
            answer += hp / admiral;
            hp -= admiral * answer;

            if (hp % soldier != 0)
            {
                answer += hp / soldier;
                hp -= soldier * (hp / soldier);

                if (hp % worker == 0)
                {
                    answer += hp / worker;
                    hp -= worker * (hp / worker);
                }
            }
        }
    }
    while (hp > 0);


    return answer;
}
