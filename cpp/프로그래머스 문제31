// day8 프로그래머스 외계행성의 나이 문제 풀이
// 23.05.19
// 아스키코드를 이용한 문제 풀이

#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";

    // 나이가 0이 될 때까지 반복합니다.
    while (age > 0) {
        int digit = age % 10; // 나이의 마지막 숫자를 얻습니다.
        age /= 10; // 나이에서 마지막 숫자를 제거합니다.

        char ageInChar = 'a' + digit; // 숫자를 해당하는 알파벳으로 변환합니다.
        answer = ageInChar + answer; // 알파벳을 문자열의 앞에 추가합니다.
    }

    return answer; // 변환된 문자열을 반환합니다.
}
