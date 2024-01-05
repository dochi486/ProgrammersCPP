#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots)
{
    vector<int> x;
    vector<int> y;
    // x 제일 큰 값 - x 제일 작은 값 = 너비
    // y 제일 큰 값 - y 제일 작은 값 = 높이

    for (int i = 0; i < dots.size(); ++i)
    {
        x.push_back(dots[i][0]);
        y.push_back(dots[i][1]);
    }

    int x_max = *max_element(x.begin(), x.end());
    int x_min = *min_element(x.begin(), x.end());
    int y_max = *max_element(y.begin(), y.end());
    int y_min = *min_element(y.begin(), y.end());

    int width = x_max - x_min;
    int height = y_max - y_min;


    return width * height;
}

int main(int argc, char* argv[])
{
    solution({{1, 1}, {2, 1}, {2, 2}, {1, 2}});
    return 0;
}
