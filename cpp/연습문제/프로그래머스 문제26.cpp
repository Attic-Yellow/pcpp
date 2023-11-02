// day7 프로그래머스 특정 문자 제거하기 문제 풀이
// 23.05.18

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";  // 결과를 저장할 문자열 answer를 초기화

    // my_string의 모든 문자에 대해 반복
    for (int i = 0; i < my_string.length(); i++) {
        // 현재 문자가 letter가 아닌 경우 answer에 추가
        if (my_string.substr(i, 1) != letter) {
            answer += my_string[i];
        }
    }

    return answer;  // letter가 제거된 문자열 answer 반환
}
