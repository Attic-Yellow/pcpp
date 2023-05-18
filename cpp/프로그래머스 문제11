//day3 중앙값 구하기 프로그래머스 문제 풀이
//23.05.14

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    sort(array.begin(), array.end());
    
    if(array.size() % 2 == 1)
    {
        return (double)array[array.size() / 2];
    }
    else
    {
        return ((double)array[array.size() / 2] + (double)array[array.size() / 2 + 1]) / 2.0f;
    }
    return answer;
}
