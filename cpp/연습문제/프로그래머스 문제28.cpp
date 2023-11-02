// day7 프로그래머스 양꼬치 문제 풀이
// 23.05.18

#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int price = n * 12000;
    int k_price = k * 2000 - n/10 * 2000;
    answer = price + k_price;
    return answer;
}
