#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> box, int n)
{
    int answer = 0;
    int volume = 1;

    // for (size_t i = 0; i < box.size(); ++i)
    // {
    //     
    // }

    int w = box[0] / n;
    int h = box[1] / n;
    int v = box[2] / n;

    int dice_volume = w * h * v;

    answer = volume / dice_volume;

    return dice_volume;
}

// int solution(vector<int> box, int n) {
//     return (box[0] / n) * (box[1] / n) * (box[2] / n);
// }

int main(int argc, char* argv[])
{
    solution({10, 8, 6}, 3);
    return 0;
}
