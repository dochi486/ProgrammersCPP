#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board)
{
    vector<int> answer;
    int x = 0;
    int y = 0;

    int dx = board[0] / 2;
    int dy = board[1] / 2;

    for (auto dir : keyinput)
    {
        // if(abs(x) > board[0] / 2)
        // {
        //     if(x < 0)
        //         x = - (board[0] / 2);
        //     else
        //         x = board[0] / 2;
        // }
        // if(abs(y) > board[1] / 2)
        // {
        //     if(y < 0)
        //         y = -(board[1] / 2);
        //     else
        //         y = board[1] / 2;
        // }

        if (dir == "right" && x + 1 <= dx)
            x += 1;
        else if (dir == "left" && x - 1 >= -dx)
            x -= 1;
        else if (dir == "up" && y + 1 <= dy)
            y += 1;
        else if (dir == "down" && y - 1 >= -dy)
            y -= 1;
    }

    answer.push_back(x);
    answer.push_back(y);

    return answer;
}


int main(int argc, char* argv[])
{
    solution({"right", "right", "right", "right", "right", "left"}, {9, 5});
    return 0;
}
