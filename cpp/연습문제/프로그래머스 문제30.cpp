// day8 프로그래머스 배열 자르기 문제 풀이
// 23.05.19
// erase를 이용한 문제 풀이

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    if(num1 > num2) swap(num1, num2); // num1이 num2보다 크면 두 수를 교환하여 num1 <= num2를 보장합니다.
    
    if(num2 < numbers.size())
    {
        numbers.erase(numbers.begin() + num2 + 1, numbers.end()); // 먼저 num2 이후의 요소를 제거합니다.
    }
    if(num1 < numbers.size())
    {
        numbers.erase(numbers.begin(), numbers.begin() + num1); // 그 다음 num1 이전의 요소를 제거합니다.
    }
    
    return numbers; // 수정된 벡터를 반환합니다.
}
