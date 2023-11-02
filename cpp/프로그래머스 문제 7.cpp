//day2 숫자 비교하기 프로그래머그 문제 풀이
//23.05.13

#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    if (num1 != num2)
    {
        answer = -1;
    }
    else
    {
        answer = 1;
    }
    return answer;
}
