// day7 프로그래머스 짝수의 합 문제 풀이
// 23.05.18
//반복문을 이용한 문제 풀이

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 0; i <= n; i += 2)
    {
        answer += i;
    }
    return answer;
}
