#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array)
{
    vector<int> answer;
    vector<int> copy = array;

    sort(array.begin(), array.end());

    int size = array.size();

    answer.push_back(array[size - 1]);
    int index = find(copy.begin(), copy.end(), array[size - 1]) - copy.begin();
    answer.push_back(index);

    return answer;
}

/*
* vector<int> solution(vector<int> array) {
    vector<int> answer;
    auto t = max_element(array.begin(), array.end());
    answer.push_back(*t);
    answer.push_back(distance(array.begin(),t));
    return answer;
}
 */


int main(int argc, char* argv[])
{
    solution({1, 8, 3});
    return 0;
}
