int solution(int hp)
{
    int answer = 0;

    // int admiral = 5;
    // int soldier = 3;
    // int worker = 1;

    answer += hp / 5;
    hp = hp % 5;
    answer += hp / 3;
    hp = hp % 3;
    answer += hp;


    // do
    // {
    //     if(hp % admiral != 0)
    //     {
    //         answer += hp / admiral;
    //         hp -= admiral * answer;
    //
    //         if(hp % soldier != 0)
    //         {
    //             answer += hp / soldier;
    //             hp -= soldier * (hp / soldier);
    //
    //             if(hp % worker == 0)
    //             {
    //                 answer += hp / worker;
    //                 hp -= worker * (hp / worker);
    //             }
    //         }
    //         else
    //         {
    //             answer += hp / soldier;
    //             hp -= soldier * (hp / soldier);
    //
    //             if(hp % worker == 0)
    //             {
    //                 answer += hp / worker;
    //                 hp -= worker * (hp / worker);
    //             }
    //         }
    //     }
    //     else
    //     {
    //         if(hp % soldier != 0)
    //         {
    //             answer += hp / soldier;
    //             hp -= soldier * (hp / soldier);
    //
    //             if(hp % worker == 0)
    //             {
    //                 answer += hp / worker;
    //                 hp -= worker * (hp / worker);
    //             }
    //         }
    //         else
    //         {
    //             answer += hp / soldier;
    //             hp -= soldier * (hp / soldier);
    //
    //             if(hp % worker == 0)
    //             {
    //                 answer += hp / worker;
    //                 hp -= worker * (hp / worker);
    //             }
    //         }
    //     }
    // }while(hp > 0);
    //

    return answer;
}


int main(int argc, char* argv[])
{
    solution(13);
    return 0;
}
